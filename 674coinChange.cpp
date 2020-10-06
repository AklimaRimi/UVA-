//coin change unique ways..

#include<bits/stdc++.h>

using namespace std;

int main()
{

    int i,j,k,m,n;
    int ar[6] = {0,1,5,10,25,50};
    while(cin>>n)
    {
    int br[n+2];
    memset(br , 0 , sizeof br);
   // cout<<br[5]<<endl;
    br[0]=1;
    for(i=0;i<=5;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=ar[i])
                {
                    br[j]+= br[j-ar[i]];

                }
                //cout<<br[j]<<" ";
        }
    }



    cout<<br[n]<<endl;
    }
}
