// simple 0-1 dp with tracking the path
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,z,n,m,i,j,k;
while(scanf("%d %d",&n,&m) != EOF)
        {
            int value[m+1],wt[m+2];

            for(i=0;i<m;i++)
            {
                cin>>value[i];
                wt[i]=value[i];
            }


            int table[m+5][n+5],cd[m+5][n+5];
            for(i=0;i<=m;i++)
            {
                for(j=0;j<=n;j++)
                {
                    if(i==0 | j==0)
                    {
                        table[i][j]=0;
                    }
                   else if(wt[i-1]<=j)
                    {
                        table[i][j] = max(value[i-1]+ table[i-1][j - wt[i-1]], table[i-1][j]);
                    }
                    else
                    {
                        table[i][j]= table[i-1][j];
                    }
                }

            }

            vector<int>vc;
            int res = table[m][n];

             int w = n;
            for (i = m; i > 0 && res > 0; i--) {

                if (res == table[i-1 ][w])
                    continue;
                else {

                    vc.push_back(wt[i-1]);


                    res = res - value[i -1];
                    w = w - wt[i -1];
                }
            }

            reverse(vc.begin(),vc.end());

            for(i=0;i<vc.size();i++)
            {
                printf("%d ",vc[i]);
            }

            cout<<"sum:"<<table[m][n]<<endl;
    }
}
