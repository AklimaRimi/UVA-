//simple LCS with stl

#include<bits/stdc++.h>

using namespace std;

int table[22][22];

int main()
{

    int i,j,k,n,m,x;
    cin>>n;
    map<int,int>mp1,mp2;
    map<int,int> :: iterator it1, it2;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        mp1.insert(make_pair(m,i));
    }
    int ar[n+1];
    while((cin>>x) )
    {
        mp2.insert(make_pair(x,1));
        for(i=2;i<=n;i++)
        {
            cin>>m;
        mp2.insert(make_pair(m,i));
        }
        i=1,j=1;

        for(it1 = mp1.begin();it1 != mp1.end() ;it1++)
        {
            j=1;
            for(it2 = mp2.begin();it2 != mp2.end() ;it2++)
            {
                if(it1->second == it2->second)
                {
                    table[i][j] = table[i-1][j-1]+1;
                }
                else
                {
                    table[i][j] = max(table[i-1][j],table[i][j-1]);
                }

                j++;

            }

            i++;

        }
        cout<<table[n][n]<<endl;
        memset(table, 0, sizeof table);
        mp2.clear();
    }


}
