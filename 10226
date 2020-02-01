#include<bits/stdc++.h>/*rimi*/
using namespace std;
#define max 100005
int ar[max];
vector<int >tree(max*4);
int k=1;
pair<int, int> t[4*100];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	 long  long int z,m,a,b,c,t,i,j,n,k,h,e,w,q,l,o,d;
	 double dou;
	string s1,s2,str;
    map<string, int>ma;
    map<string, int>::iterator it;
    scanf("%d\n\n", &t);
    char s[40];

    for(i=0;i<t;i++)
    {
        n=0;

        while( gets(s))
        {
           // cin.ignore();
           if (strlen(s) == 0)
				break;
            else
            {
                ma[s]++;
            }

            n++;
        }

        for( it=ma.begin();it != ma.end();it++)
        {

                printf("%s %.4lf\n", (*it).first.data(),(double) (*it).second / (double) n * 100.0);


        }
        printf("\n");
        ma.clear();
    }


return 0;
}
