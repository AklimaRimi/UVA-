//simple flood fill algo

#include<bits/stdc++.h>

using namespace std;

char ar[30][30];
int visit[30][30];
int n;

void fil(int x,int y)
{
    if(x<0 || y<0 ||x>=n || y>=n|| ar[x][y]=='0')
    {
        return;
    }
    else
    {
        ar[x][y]='0';
        fil(x+1,y);
        fil(x-1,y);
        fil(x+1,y+1);
        fil(x-1,y-1);
        fil(x,y+1);
        fil(x,y-1);
        fil(x+1,y-1);
        fil(x-1,y+1);
    }
}
int main()
{
    int i,j,k=0;
    while(cin>>n)
    {
        k++;
        memset(ar,0,sizeof ar);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>ar[i][j];
            }
        }
        int ans=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(ar[i][j]=='1')
                {
                    ans++;
                    fil(i,j);
                }
            }
        }

        cout<<"Image number "<<k<<" contains "<<ans<<" war eagles."<<endl;

    }

}
