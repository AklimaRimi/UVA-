//Easy problem on LIS 
#include<bits/stdc++.h>
#define mx 100010
using namespace std;

int i,j,k,l,m,n;
int ar[mx],br[mx],cr[mx];

int main()
{
    n=1;
    while(cin>>k)
    {
        ar[n]=k;
        n++;
    }
    int ans=0;
    for(i=1;i<=n;i++){
    cr[i] = lower_bound(br+1,br+ans+1,ar[i])-br;
    ans = max(ans,cr[i]);
    br[cr[i]] = ar[i];
    }
    vector<int>vc;
    cout<<ans<<endl;
    for(i=n;i>=1;i--)
    {
        if(cr[i]==ans)
        {
            vc.push_back(ar[i]);
            ans--;
        }
    }
    cout<<"-\n";
    for(i=vc.size()-1;i>=0;i--)
    {
        cout<<vc[i]<<endl;
    }
}
