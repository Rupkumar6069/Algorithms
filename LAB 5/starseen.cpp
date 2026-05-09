#include <iostream>
using namespace std;

void add(int A[2][2], int B[2][2], int C[2][2]) {
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void sub(int A[2][2], int B[2][2], int C[2][2]) {
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            C[i][j] = A[i][j] - B[i][j];
}

void strassen(int A[2][2], int B[2][2], int C[2][2]) {
    int P1[2][2], P2[2][2], P3[2][2], P4[2][2];
    int P5[2][2], P6[2][2], P7[2][2];
    int temp1[2][2], temp2[2][2];
    
    sub(B, (int[2][2]){{B[1][0], B[1][1]}, {B[1][0], B[1][1]}}, temp1);

    int a=A[0][0], b=A[0][1], c=A[1][0], d=A[1][1];
    int e=B[0][0], f=B[0][1], g=B[1][0], h=B[1][1];

    int M1 = (a + d) * (e + h);
    int M2 = (c + d) * e;
    int M3 = a * (f - h);
    int M4 = d * (g - e);
    int M5 = (a + b) * h;
    int M6 = (c - a) * (e + f);
    int M7 = (b - d) * (g + h);

    C[0][0] = M1 + M4 - M5 + M7;
    C[0][1] = M3 + M5;
    C[1][0] = M2 + M4;
    C[1][1] = M1 - M2 + M3 + M6;
}

int main() {
    int A[2][2], B[2][2], C[2][2];

    cout << "Enter elements of 1st 2x2 matrix:\n";
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin >> A[i][j];

    cout << "Enter elements of 2nd 2x2 matrix:\n";
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin >> B[i][j];

    strassen(A, B, C);

    cout << "Resultant matrix:\n";
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}