#include<bits/stdc++.h>
using namespace std;



int main(){
   int n,m,b;
   int cnt=0;
   cin>>n>>m;
   for(int i=0;i<=sqrt(n);i++){
           b=n-i*i;
           if((i+(b*b))==m){
            cnt++;
           }
   }
   cout<<cnt<<endl;
    return 0;
}