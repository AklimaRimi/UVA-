//simple LCS.. bt careful about string...


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,n,o,p;

    string s,c;

    while(getline(cin,s))
    {
        getline(cin,c);
        int table[s.length()+1][c.length()+1];
        memset(table , 0 ,sizeof table);
        for(i=1;i<=s.length();i++)
        {
            for(j=1;j<=c.length();j++)
            {
                if(s[i-1]==c[j-1])
                {
                    table[i][j]=table[i-1][j-1]+1;
                }
                else
                {
                    table[i][j] = max(table[i-1][j],table[i][j-1]);
                }
            }
        }
        cout<<table[s.length()][c.length()]<<endl;
    }
}
