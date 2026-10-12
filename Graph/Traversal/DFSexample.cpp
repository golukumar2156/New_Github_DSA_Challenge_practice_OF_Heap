#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> graph;
void adde(int s, int d) {
    graph[s].push_back(d);
    graph[d].push_back(s);
}

void helper(int node, vector<bool>& vis) {
    vis[node] = true;
    cout << node << " ";
    for (int neighbor : graph[node]) {
        if (!vis[neighbor]) {
            helper(neighbor, vis);
        }
    }
}

int main() {
    int v;
    cin >> v;

    graph.resize(v);

    int e;
    cin >> e;

    while (e--) {
        int s, d;
        cin >> s >> d;
        adde(s, d);
    }

    vector<bool> vis(v, false);

    if (v > 0) {
        helper(0, vis);
    }

    return 0;
}
