#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of matrices: ";
    cin >> n;

    int p[n+1]; 

    cout << "Enter dimensions: ";
    for(int i = 0; i <= n; i++) {
        cin >> p[i];
    }

    int m[n][n];

    for(int i = 0; i < n; i++)
        m[i][i] = 0;

    for(int L = 2; L <= n; L++) {
        for(int i = 0; i < n - L + 1; i++) {
            int j = i + L - 1;
            m[i][j] = INT_MAX;

            for(int k = i; k < j; k++) {
                int q = m[i][k] + m[k+1][j] + p[i]*p[k+1]*p[j+1];

                if(q < m[i][j]) {
                    m[i][j] = q;
                }
            }
        }
    }

    cout << "Minimum number of multiplications = " << m[0][n-1];

    return 0;
}