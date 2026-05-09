#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted consecutive elements (one missing):\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int missing = -1;

    for(int i = 0; i < n - 1; i++) {
        if((arr[i] % 2) == (arr[i+1] % 2)) {
            missing = (arr[i] + arr[i+1]) / 2;
            break;
        }
    }

    if(missing != -1)
        cout << "Missing number is: " << missing;
    else
        cout << "No missing number found";

    return 0;
}