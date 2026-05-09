#include <iostream>
using namespace std;

void generate(int arr[], int index, int n) {
    if(index == n) {
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    arr[index] = 0;
    generate(arr, index + 1, n);

    arr[index] = 1;
    generate(arr, index + 1, n);
}

int main() {
    int n;
    cout << "Enter number of variables: ";
    cin >> n;

    int arr[n];

    generate(arr, 0, n);

    return 0;
}