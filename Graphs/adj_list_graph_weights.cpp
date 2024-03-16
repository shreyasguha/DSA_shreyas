#include <apache2/stdc++.h>
 
//THIS CODE HAS SOME MINOR ERRORS, TEST RUN IT AND CORRECT IT

using namespace std;
 
int main()
{
    int n, m;
    cin>>n>>m;
    vector<pair<int, int> >adj[n+1];
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        adj[a].push_back(make_pair(b, c));
        adj[b].push_back(make_pair(a, c));
    }

    for (int i = 0; i < n+1; i++)
    {
        cout<<i<<": ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout<<"("<<adj[i][j].first<<", "<<adj[i][j].second<<"), ";
        }
        cout<<endl;
    }
    
}