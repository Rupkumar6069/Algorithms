#include <iostream>
using namespace std;

int main() {
    long long x, n;
    cout << "Enter base (x) and exponent (n): ";
    cin >> x >> n;

    long long result = 1;

    while(n > 0) {
        if(n % 2 == 1) {
            result *= x;
        }
        x *= x;
        n /= 2;
    }

    cout << "Result = " << result;

    return 0;
}