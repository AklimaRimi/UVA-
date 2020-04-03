#include <bits/stdc++.h>

using namespace std;

vector< vector<int> >v;
vector<int>vv;

int n,m,s;
int ar[110];
stack<int>st;
void DFS(int s)
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

int main()
{
    int i,j,k1,k2;
     while(cin>>n>>m)
     {

            if(n==0&&m==0)break;


    v.assign(n+1, vector<int>());
    int maxi=-1;
    for(i=0;i<m;i++)
    {
        cin>>k1>>k2;
        maxi = max(max(k1,k2),maxi);
        v[k1].push_back(k2);
        //v[k2].push_back(k1);

    }
    for(i=1;i<=n;i++)
    {
        if(ar[i]==0)
        {
                DFS(i);
        }
    }
    reverse(vv.begin(),vv.end());
        cout<<vv[0];
    for(i=1;i<vv.size();i++)
    {
        cout<<" "<<vv[i];;
    }
    cout<<endl;
    vv.erase(vv.begin(),vv.end());
    memset(ar,0,sizeof(ar));
    v.erase(v.begin(),v.end());
     }
    return 0;
}
