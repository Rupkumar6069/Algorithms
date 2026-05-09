#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter degree of polynomial: ";
    cin >> n;

    int a[n+1];

    cout << "Enter coefficients (from constant term to highest degree):\n";
    for(int i = 0; i <= n; i++) {
        cin >> a[i];
    }

    int x;
    cout << "Enter value of x: ";
    cin >> x;

    int result = a[n];

    for(int i = n - 1; i >= 0; i--) {
        result = result * x + a[i];
    }

    cout << "Polynomial value = " << result;

    return 0;
}