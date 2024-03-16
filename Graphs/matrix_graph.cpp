#include <apache2/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m;
    cin>>n>>m;
    int adj[n+1][n+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            adj[i][j]=0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin>>a>>b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    
    


}