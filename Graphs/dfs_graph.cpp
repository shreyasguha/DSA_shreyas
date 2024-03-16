#include <stdc++.h>
 
using namespace std;
 
void fdfs(int node, vector<int> adj[], vector<int> &dfs, int vis[])
{
    vis[node] = 1;
    dfs.push_back(node);
    for (auto it: adj[node])
    {
        if (vis[it] != 1)
        {
            fdfs(it, adj, dfs, vis);
        }
    }
}

int main()
{
    //CREATE GRAPH
    int n, m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    

    //DISPLAY
    cout<<endl<<"display adjacency list"<<endl;
    for (int i = 0; i < n+1; i++)
    {
        cout<<i<<": ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout<<adj[i][j]<<", ";
        }
        cout<<endl;
    }


    //DFS
    cout<<endl<<"display dfs"<<endl;
    int vis[n+1];
    for (int i = 0; i < n+1; i++)
    {
        vis[i] = 0;
    }
    vector<int> dfs;
    fdfs(1, adj, dfs, vis);

    for (auto it: dfs)
    {
        cout<<it<<endl;
    }
     

}