//dijkastra 

#include<bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;
long long visit[20000+1], value[20000+1];
vector< pair<int,int>  >vc[20000];


void dij(int s,int n,int m)
{
    int i,j,k;
    for(i=0;i<=20001;i++)
    {
        value[i]=INF;
        visit[i]=0;
    }
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >q;
 q.push(make_pair(s,0));
 value[s]=0;
visit[s]=1;
    while(!q.empty())
    {
        int u = q.top().first;
        int w = q.top().second;
            q.pop();
            visit[u]=1;

            //if(value[u]<w)continue;
        for(i=0;i<vc[u].size();i++)
        {
            int v = vc[u][i].first;
            int wi = vc[u][i].second;
            if( wi+w<value[v] )
            {
                value[v] =wi+w;
                q.push(make_pair(v,value[v]));
            }
        }
    }
}
int main()
{
    int t,tt;
    cin>>t;
    int n,m,s,e,i,j;

    for(tt=1;tt<=t;tt++)
    {
        cin>>n>>m>>s>>e;

        for(i=0;i<=20001;i++)
        {
               vc[i].clear();
        }
        int a,b,c;

        for(i=0;i<m;i++)
        {
            cin>>a>>b>>c;
            vc[a].push_back( {b,c });
            vc[b].push_back({a,c});
        }
        dij(s,n,m);
        if(value[e]==INF)
        {
            cout<<"Case #"<<tt<<": unreachable"<<endl;
        }
        else{
          cout<<"Case #"<<tt<<": "<<value[e]<<endl;

    }

    }
}
