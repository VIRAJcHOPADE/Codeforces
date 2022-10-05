#include<bits/stdc++.h>
using namespace std;
int const N=1e4+10;


int main(){
   int n,m,a[N],k;
   vector<int>b;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   cin>>m;
   for(int j=0;j<m;j++){
     cin>>k;
     for(int i=0;i<n;i++){
        if(k%a[i]==0){
            b.push_back(k/a[i]);
        }
     }
   }
   int ma=*max_element(b.begin(),b.end());
   cout<<count(b.begin(),b.end(),ma);
    return 0;
}