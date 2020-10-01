
//LIS

#include<bits/stdc++.h>
using namespace std;
int table[1002][1002];

int main()
{

    int i,j,k,l,m,n,o,p;
    set<pair<int ,pair<int, int> > > mp;
    set<pair<int ,pair<int, int > > > :: iterator it1,it;
       set<pair<int ,pair<int, int > > >::reverse_iterator rit;
    vector<pair<int, pair<int,int> > > vc;
    i=0;
    while(cin>>n>>m)
    {
        i++;
        mp.insert(make_pair(m,make_pair(n,i)));
    }


    for(rit=mp.rbegin();rit != mp.rend();rit++)
    {
        vc.push_back(make_pair(rit->first , make_pair(rit->second.first, rit->second.second)));
    }



    n=i;

    vector<int>len(n+1,-1),prev(n+1,-1);
   // for(i=0;i<vc.size();i++)
    //{
    //    cout<<vc[i].first<<" "<<vc[i].second.first<<" "<<vc[i].second.second<<endl;
    //}

    int maxi =0;
    for(i=1;i< vc.size();i++)
    {
        for(j=0;j<=i;j++)
        {
            if(vc[i].first<vc[j].first && vc[i].second.first>vc[j].second.first&& len[j]+1>len[i])
            {
                len[i] = len[j]+1;
                prev[i] = j;
                maxi = max(maxi,len[i]);
            }
        }
    }
           i = (distance(len.begin(),max_element(len.begin(), len.end())));


vector<int>ans;
        while(prev[i]!=-1)
        {
            ans.push_back(vc[i].second.second);
            i= prev[i];
        }
        ans.push_back(vc[i].second.second);
           cout<<ans.size()<<endl;

for(i=ans.size()-1;i>=0;i--)
  {
      cout<<ans[i]<<endl;
  }

}
