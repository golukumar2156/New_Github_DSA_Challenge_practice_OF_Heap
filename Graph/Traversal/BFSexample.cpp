#include <iostream>
#include <vector>
#include<queue>
using namespace std;
vector<vector<int>> graph;
void adde(int s, int d) {
    graph[s].push_back(d);
    graph[d].push_back(s);
}

void helper(int node, vector<bool>& vis) {
   queue<int>q;
   q.push(node);
   vis[node]=true;
   while(!q.empty()){
    int n=q.front();
    q.pop();
    cout<<n<<" ";
    for(int neighbor:graph[n]){
        if(!vis[neighbor]){
            vis[neighbor]=true;
            q.push(neighbor);
        }
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
