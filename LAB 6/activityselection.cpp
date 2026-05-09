#include <iostream>
#include <algorithm>
using namespace std;

struct Act {
    int start, end;
};

bool cmp(Act a, Act b) {
    return a.end < b.end;
}

int main() {
    int n;
    cin >> n;

    Act a[100];
    for(int i = 0; i < n; i++)
        cin >> a[i].start >> a[i].end;

    sort(a, a + n, cmp);

    int count = 1;
    int lastEnd = a[0].end;

    cout << "Selected activities:\n";
    cout << a[0].start << " " << a[0].end << endl;

    for(int i = 1; i < n; i++) {
        if(a[i].start >= lastEnd) {
            cout << a[i].start << " " << a[i].end << endl;
            count++;
            lastEnd = a[i].end;
        }
    }

    cout << "Maximum activities = " << count;

    return 0;
}