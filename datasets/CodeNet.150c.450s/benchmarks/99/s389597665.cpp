#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

string itos(int n){
int a,b,c,d;
a=n/1000;
n=n%1000;
b=n/100;
n=n%100;
c=n/10;
n=n%10;
d=n;
string s=""; 
if(a>1) s=s+to_string(a);
if(a>0) s=s+"m";
if(b>1) s=s+to_string(b);
if(b>0) s=s+"c";
if(c>1) s=s+to_string(c);
if(c>0) s=s+"x";
if(d>1) s=s+to_string(d);
if(d>0) s=s+"i";
return s;
}


int sstoi(string s){
int l=s.length();
int ans=0,k=1;
for(int i=0;i<l;i++){
if('1'<s[i] && s[i]<='9'){
k=s[i]-'0';
}
else if(s[i]=='m'){
ans=ans+k*1000;
k=1;
}
else if(s[i]=='c'){
ans=ans+k*100;
k=1;
}
else if(s[i]=='x'){
ans=ans+k*10;
k=1;
}
else if(s[i]=='i'){
ans=ans+k;
k=1;
}

}

return ans;
}










int main() {
string s,t;
int n;
cin>>n;
for(int i=0;i<n;i++){
cin>>s>>t;
int ans=sstoi(s)+sstoi(t);
//cout<<sstoi(s)<<" "<<sstoi(t)<<endl;
cout<<itos(ans)<<endl;

}

	return 0;
}