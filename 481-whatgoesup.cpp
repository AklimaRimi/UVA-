// greedy(N.log.n) LIS ... N.B don't use recoursion .. cost you time limit exceeded. 

#include <bits/stdc++.h>

using namespace std;

void print(const  int e, const  vector<int>vc,const  vector<int> parent) {
    if(e < 0)
        return;
    print(parent[e],vc,parent);
    cout<<vc[e]<<endl;
}

int main()
{

    int n,i,j,a,b;
    vector<int> vc;

   i=0;

 while( cin>>n)
    {
        vc.push_back(n);
    }

    vector<int>L(vc.size()),lis(vc.size()), parent(vc.size()),LIS(vc.size());
    b=0,n=0;
    int maxxi=0;
    for(i=0;i<vc.size();i++)
        {

            a = lower_bound(L.begin(),L.begin()+b,vc[i])-L.begin();
            L[a]=vc[i];
            LIS[a]=i;
           // cout<<a<<" "<<LIS[a]<<" \n";
            parent[i]  =  LIS[a-1];
            if(a==b)
            {
                b++;
                n=i;
            }

    }

    cout<<b<<endl<<"-"<<endl;
    int k = n;
    vector<int> last(b);
    for(i=b-1;i>=0;i--)
    {
        last[i] = vc[k];
        k = parent[k];
    }

    for(i=0;i<b;i++)
    {
        cout<<last[i]<<endl;
    }

}
