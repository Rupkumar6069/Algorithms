#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
    int x, y;
};


int cross(Point O, Point A, Point B) {
    return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}

vector<Point> convexHull(vector<Point> pts) {
    int n = pts.size();
    if(n <= 1) return pts;

    sort(pts.begin(), pts.end(), [](Point a, Point b) {
        return a.x < b.x || (a.x == b.x && a.y < b.y);
    });

    vector<Point> hull;

    for(int i = 0; i < n; i++) {
        while(hull.size() >= 2 &&
              cross(hull[hull.size()-2], hull[hull.size()-1], pts[i]) <= 0)
            hull.pop_back();
        hull.push_back(pts[i]);
    }


    int t = hull.size() + 1;
    for(int i = n - 2; i >= 0; i--) {
        while(hull.size() >= t &&
              cross(hull[hull.size()-2], hull[hull.size()-1], pts[i]) <= 0)
            hull.pop_back();
        hull.push_back(pts[i]);
    }

    hull.pop_back();
    return hull;
}

int main() {
    int n;
    cin >> n;

    vector<Point> pts(n);
    for(int i = 0; i < n; i++)
        cin >> pts[i].x >> pts[i].y;

    vector<Point> hull = convexHull(pts);

    cout << "Convex Hull:\n";
    for(auto p : hull)
        cout << p.x << " " << p.y << endl;

    return 0;
}