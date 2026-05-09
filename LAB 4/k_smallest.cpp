#include <iostream>
using namespace std;

int part(int a[], int l, int h) {
    int p = a[h], i = l;
    for(int j = l; j < h; j++) {
        if(a[j] <= p) {
            swap(a[i], a[j]);
            i++;
        }
    }
    swap(a[i], a[h]);
    return i;
}

int quick(int a[], int l, int h, int k) {
    int pi = part(a, l, h);

    if(pi == k) return a[pi];
    else if(k < pi) return quick(a, l, pi - 1, k);
    else return quick(a, pi + 1, h, k);
}

int main() {
    int n, k, a[100];
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> k;

    cout << quick(a, 0, n - 1, k - 1);
}