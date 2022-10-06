#include<bits/stdc++.h>
using namespace std;
int const N=1e4+10;


int main(){
   int n,m;
   cin>>n>>m;
   int a[n];
   
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int money=0;
   sort(a,a+n);
   for(int i=0;i<n;i++){
    if(m>0){
      if(a[i]<0){
        money+=(abs(a[i]));
        m--;
      }
    }
    if(m==0){
      break;
    }
   }
   cout<<money<<endl;
    return 0;
}