#include <iostream>
using namespace std;

int part(int a[], int l, int h) {
    int p = a[h], i = l;
    for(int j = l; j < h; j++) {
        if(a[j] < p) {
            swap(a[i], a[j]);
            i++;
        }
    }
    swap(a[i], a[h]);
    return i;
}

void qs(int a[], int l, int h) {
    if(l < h) {
        int pi = part(a, l, h);
        qs(a, l, pi - 1);
        qs(a, pi + 1, h);
    }
}

int main() {
    int n, a[100];
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    qs(a, 0, n - 1);

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}