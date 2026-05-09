#include <iostream>
using namespace std;

int countSteps(double v) {
    if(v < 1.0) {
        return 0;
    }
    return 1 + countSteps(v * 0.555);
}

int main() {
    double v;

    cout << "Enter initial velocity: ";
    cin >> v;

    int steps = countSteps(v);

    cout << "Number of steps required: " << steps;

    return 0;
}