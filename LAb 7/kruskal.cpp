#include <iostream>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, w;
};

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

int find(int parent[], int i) {
    while(parent[i] != i)
        i = parent[i];
    return i;
}

int main() {
    int n = 4, e = 5;

    Edge edges[5] = {
        {0,1,10},
        {0,2,6},
        {0,3,5},
        {1,3,15},
        {2,3,4}
    };

    sort(edges, edges + e, cmp);

    int parent[4];
    for(int i = 0; i < n; i++)
        parent[i] = i;

    cout << "MST edges:\n";

    for(int i = 0; i < e; i++) {
        int u = edges[i].u;
        int v = edges[i].v;

        int pu = find(parent, u);
        int pv = find(parent, v);

        if(pu != pv) {
            cout << u << " - " << v << " = " << edges[i].w << endl;
            parent[pu] = pv;  
        }
    }

    return 0;
}