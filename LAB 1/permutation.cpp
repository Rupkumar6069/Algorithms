#include <iostream>
using namespace std;

void permute(string &str, int l, int r) {
    if(l == r) {
        cout << str << endl;
    } else {
        for(int i = l; i <= r; i++) {
            // Swap
            swap(str[l], str[i]);

            // Recur
            permute(str, l + 1, r);

            // Backtrack
            swap(str[l], str[i]);
        }
    }
}

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    permute(str, 0, str.length() - 1);

    return 0;
}