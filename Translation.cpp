#include<bits/stdc++.h>
using namespace std;



int main(){
    string s;
    cin>>s;
    string a;
    cin>>a;

    int i=0;
    int j=a.size()-1;
    if(s.size()!= a.size()){
        cout<<"NO"<<endl;
        return 0;
    }
    while(i<s.size() && j>=0){
         if(s[i]!=a[j]){
            cout<<"NO"<<endl;
            return 0;
         }
         
         i++;
         j--;
    }
    cout<<"YES"<<endl;
    return 0;
}