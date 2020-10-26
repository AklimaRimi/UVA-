//DFS

#include<bits/stdc++.h>

using namespace std;

int visit[100];
int n;

vector<int>vc[100000];

void dfs(int s)
{
    visit[s]=1;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        visit[u]=1;
        for(int i=0;i<vc[u].size();i++)
        {
            int v = vc[u][i];
            if(visit[v]==0)
            {

                q.push(v);
            }
        }
    }

}


int main()
{
    int t,tt;
    cin>>t;
    for(tt=1;tt<=t;tt++)
    {

            string s;
            char c;
            cin>>c;
            cin.ignore();
             n = int(c)-int('A');
            memset(visit,0,sizeof visit);

            for(int i=0;i<=n;i++)
            {
                vc[i].clear();
            }

            while(getline(cin,s)&& s !="") {
                   vc[s[0]-int('A')].push_back(s[1]-int('A'));
                   vc[s[1]-int('A')].push_back(s[0]-int('A'));
            }
            int ans=0;
            for(int i=0;i<=n;i++)
            {
                if(visit[i]==0)
                {
                    ans++;
                    dfs(i);
                }
            }
            cout<<ans<<endl;
            if(tt<t)
            {
                cout<<endl;
            }
        }
}
