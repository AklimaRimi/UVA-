//simple problem LIS(N*N)


#include<bits/stdc++.h>
#define mx 100000

using namespace std;

int main()
{
    int i,j,m,o,p,tt,t;
    cin>>t;
    cin.ignore();
    cin.ignore();
    for(tt=0;tt<t;tt++)
    { if(tt!=0)
            printf("\n");
        string s;
        vector<int>ar;

        while(getline(cin,s)&&s!="")
        {
            stringstream ss(s);
            int k;
            ss>>k;
            ar.push_back(k);
        }
        int n = ar.size();
        vector<int>br(n+1,1);
        vector<int>cr(n+1,-1);

        int mxx=0;
        for(i=1;i<n;i++)
        {
           // cout<<ar[i]<<" ";
            for(j=0;j<i;j++)
            {
                 if ( ar [i] > ar [j] && br [i] < br [j] + 1 )
                {
                    br[i]=br[j]+1;
                    cr[i]=j;
                }
            }
        }
        i = (distance(br.begin(),max_element(br.begin(), br.end())));
        vector<int>ans;
        while(cr[i]!=-1)
        {
            ans.push_back(ar[i]);
            i= cr[i];
        }
        ans.push_back(ar[i]);

printf("Max hits: %d\n",ans.size());

  reverse(ans.begin(),ans.end());
  for(i=0;i<ans.size();i++)
  {
      cout<<ans[i]<<endl;
  }

    }
}
