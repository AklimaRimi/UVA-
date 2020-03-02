#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int x,y,z,i,j,k,t;

int ar[3];
  while(cin>>ar[0]>>ar[1]>>ar[2])
  {
      sort(ar,ar+3);
      x = ar[0];
      y = ar[1];
      z = ar[2];
     // cout<<"x "<<x<<"y "<<y<<"z "<<z<<endl;
      if(x==0&&y==0&&z==0)
      {
          break;
      }
      if((x*x+y*y)==(z*z))
      {
          cout<<"right"<<endl;
      }
      else
      {
          cout<<"wrong"<<endl;
      }
  }
}
