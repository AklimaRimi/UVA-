#include<bits/stdc++.h>
using namespace std;

int n,i,j,m;
vector< vector<int>> v;
map<int,int>mp;
map<int,int>::iterator it,im;
int br[201];
struct tree
{
  int data;
  tree *left;
  tree *right;

}root;

int bfs(int s)
{
    int color[m+1]={0};
    queue<int>q;
    q.push(s);
    color[s]=1;
    br[s]==1;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
      //  cout<<x<<endl;
        for(i=0;i<v[x].size();i++)
        {
            int u = v[x][i];
            if(color[u]==1&& br[u] == br[x])
            {
                return 0;
            }
            if(!color[u])
            {
                br[u]=br[x]+1;
                color[u]=1;
                q.push(u);
            }
        }
    }
   return 1;
}
int main()
{
    int a,b;
    while(cin>>n)
    {
       if (n==0)
       {
           break;
       }
       else{
            cin>>m;
    v.assign(m+1,vector<int>());
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    if(bfs(0))cout<<"BICOLORABLE."<<endl;
    else cout<<"NOT BICOLORABLE."<<endl;
  //  mp.clear();
       }
    }
}
