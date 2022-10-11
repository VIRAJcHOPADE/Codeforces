#include <bits/stdc++.h>
using namespace std;




int main()
{
 string s,k;
 cin>>s;
 for(int i=0;i<s.size();i++){
	if(s[i] == 'a' || s[i]=='e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'y' || s[i] == 'Y'){
		continue;
	}
	else{
		k+='.';
		k+=tolower(s[i]);
	}
 }
 cout<<k<<endl;
	return 0;
}