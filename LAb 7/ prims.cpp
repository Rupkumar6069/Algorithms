#include <iostream>
using namespace std;

int main() {
    int n = 3;

    int g[3][3] = {
        {0, 1, 2},
        {1, 0, 3},
        {2, 3, 0}
    };

    int selected[3] = {0};
    selected[0] = 1;   

    for(int k = 0; k < n-1; k++) {
        int min = 999, x = 0, y = 0;

        for(int i = 0; i < n; i++) {
            if(selected[i]) {
                for(int j = 0; j < n; j++) {
                    if(!selected[j] && g[i][j] && g[i][j] < min) {
                        min = g[i][j];
                        x = i;
                        y = j;
                    }
                }
            }
        }

        cout << x << " - " << y << " = " << g[x][y] << endl;
        selected[y] = 1;
    }

    return 0;
}