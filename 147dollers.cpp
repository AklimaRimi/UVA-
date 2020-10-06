
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  i,j,k,l,m,n;
    int ar[]={0,1,8,27,64,125,216,343,512,729,1000,1331,1728,2197,2744,3375,4096,4913,5832,6859,8000,9261};
    while(cin>>n)
    {
        long long br[n+10];
        memset(br, 0, sizeof br);
        br[0]=1;
        for(i=0;i<=21; i++)
        {
            for(j=1;j<=n;j++)
            {
                if(ar[i]<=j)
                {
                   br[j] += br[j-ar[i]];
                }
            }
        }
      cout<<br[n]<<endl;
    }
}
