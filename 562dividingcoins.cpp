//minimum difference - subset sum dp

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,tt;
    cin>>t;
    for(tt=1;tt<=t;tt++)
    {
        int n,m,k;
        cin>>n;
        int ar[n+2];
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        int halfsum = sum>>1;
        //cout<<halfsum<<endl;
        bool table[n+5][halfsum+5];

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=halfsum;j++)
            {
                if(j==0)
                {
                    table[i][j]=true;
                }
                else
                    table[i][j]=false;
            }
        }

          for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=halfsum;j++)
            {
               if(ar[i]<=j)
               {
                   table[i][j] = table[i-1][j] || table[i-1][j-ar[i]];
               }
               else
               {
                   table[i][j]= table[i-1][j];
               }
            }
        }

        int x=0;
         for(int j = halfsum;j>=1;j--)
         {
             if(table[n][j]==1)
             {
                 x = j;
                 break;
             }
         }
         cout<<sum-(2*x)<<endl;
    }
}
