//coin change using 2d table.. most important ting here is i/o statement 

#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long  int i,j,k,m,n,o,p;
     unsigned long long int table[305][305];
    memset(table, 0, sizeof table);

    table[0][0]=1;
    for(i=0;i<=301;i++)
    {
        for(j=1;j<=301;j++)
        {
            if(i>=j)
            {
                table[i][j] = table[i-j][j]+table[i][j-1];
            }
            else
            {
                table[i][j] = table[i][j-1];
            }
        }
    }
    string s;

   while(getline(cin,s))
    {
		stringstream ss(s);
        int num[3], n = 0;

		while(ss >> num[n])
		{
		    n++;
		}

		if(n == 1)
        {
            m = 0, o = num[0];
        }
		else if(n == 2)
        {
			m = 0, o = num[1];
		}
		else
        {
			m = num[1], o = num[2];
		}

        k = num[0];

        if(k<m && k<o)
        {
            cout<<0<<endl;
        }

        else
        {
        if(k<o )
        {
            o = k;
        }
        if(k<m)
        {
            m=k;
        }
        if(n==1)
        {
            cout<<table[k][o]<<endl;
        }
        else if(n==2)
        {
            cout<<table[k][o]<<endl;
        }
        else
        {

            if(m<=1 ){
                    cout<<table[k][o]<<endl;
            }
            else{
                cout<<table[k][o] - table[k][m-1] <<endl;
            }
        }
        }
    }
}
