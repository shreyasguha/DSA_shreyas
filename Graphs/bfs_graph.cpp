#include <stdc++.h>
 
using namespace std;
 
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

    cout<<endl<<"display bfs"<<endl;

    //BFS TRAVERSAL
    int vis[n+1];
    for (int i = 0; i <= n; i++)
    {
        vis[i] = 0;
    }
    
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    vector<int> bfs;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for (auto it: adj[node])
        {
            if (vis[it] != 1)
            {
                q.push(it);
                vis[it] = 1;
            }
            
        }
        
    }

    for (auto it: bfs)
    {
        cout<<it<<endl;
    }
    
}