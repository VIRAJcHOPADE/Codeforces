#include<bits/stdc++.h>
using namespace std;



int main(){
   int n,b,c,d;
   cin>>n;
   c=1;
   d=0;
   string s1;
   cin>>s1;
   string s2;
   string s3;
   for(int i=0;i<n-1;i++){
    cin>>s2;
    if(s1==s2){
        c++;
    }
    else{
        s3=s2;
        d++;
    }
   }
   if(c>d){
    cout<<s1<<endl;
   }
   else{
    cout<<s3<<endl;
   }
   

    return 0;
}