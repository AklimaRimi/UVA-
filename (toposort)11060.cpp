#include <bits/stdc++.h>

using namespace std;//////////////jhamelaaaaaaaaaaaaaaaaaaa////

//vector< vector<string> >v;
vector<int>vv;
map<int ,int>mp;

int n,m,s;
int ar[10010];
int par[10010];
stack<int>st;
int parent(int n)
{
    return (par[n]==n)?n:parent(par[n]);
}
/*void DFS(int s)
{
    int i,j,k,l,m;
    ar[s]=1;
    for(i=0;i<v[s].size();i++)
    {
        int x = v[s][i];
        if(ar[x]== 0)
        {
           DFS(x);
        }
    }
    vv.push_back(s);
}
*/

int main()
{
    int i,j;

   // scanf("%d %d",&n,&m);


    int t,t2,ces=0;
 priority_queue<int, vector<int>, greater<int> > que;
     while( scanf("%d",&t)==1)
    {
        ces++;

        vector<int>v[200];
        map<string,int >alcholol;
        vector<int>ans;
        string k1[210],k2;
        int indegree[210]={0};


        for(i=0;i<t;i++)
        {
            cin>>k1[i];
            alcholol[k1[i]] = i;
        }
        cin>>t2;
        string s1,s2;
        for(i=0;i<t2;i++)
        {
            cin>>s1>>s2;
            int x= alcholol[s1];
            int y= alcholol[s2];
            v[x].push_back(y);
            indegree[y]++;

        }

        for(i=0;i<t;i++)
        {
            //cout<<i<<" "<<indegree[i]<<"\n";
            if(indegree[i]==0)
            {
                que.push(i);
            }
        }
 printf("Case #%d: Dilbert should drink beverages in this order:", ces);        while(!que.empty())
        {
            int u = que.top();
            que.pop();
            for(int xx = 0;xx<v[u].size();xx++)
            {
                int vv = v[u][xx];
                indegree[vv]--;
                if(indegree[vv]==0)
                {
                    que.push(vv);
                }
            }
            cout<<" "<<k1[u];
        }
        cout<<"."<<endl<<endl;
    }



    return 0;
}
 
