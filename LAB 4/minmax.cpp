#include <iostream>
using namespace std;

struct Pair {
    int min, max;
};

Pair findMinMax(int a[], int l, int h) {
    Pair p, left, right;

    if(l == h) {
        p.min = p.max = a[l];
        return p;
    }

    if(h == l + 1) {
        if(a[l] < a[h]) {
            p.min = a[l];
            p.max = a[h];
        } else {
            p.min = a[h];
            p.max = a[l];
        }
        return p;
    }

    int mid = (l + h) / 2;
    left = findMinMax(a, l, mid);
    right = findMinMax(a, mid + 1, h);

    p.min = (left.min < right.min) ? left.min : right.min;
    p.max = (left.max > right.max) ? left.max : right.max;

    return p;
}

int main() {
    int n, a[100];
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    Pair result = findMinMax(a, 0, n - 1);

    cout << "Min = " << result.min << endl;
    cout << "Max = " << result.max;

    return 0;
}