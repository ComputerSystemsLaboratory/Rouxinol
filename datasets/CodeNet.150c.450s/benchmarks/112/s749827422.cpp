#include<iostream>
#include<string>
using namespace std;
int main()
{
for(;;){
int n,m;
string s1[1000],s2[1000];
string ans="";
string s;
cin >> n;
if(n==0)return 0;
for(int i=0;i<n;i++){
cin >> s1[i] >> s2[i];
}
cin >> m;
for(int i=0;i<m;i++){
cin >> s;
bool f=true;
for(int j=0;j<n;j++){
if(s==s1[j]){
ans+=s2[j];
f=false;
}
}
if(f)ans+=s;
}
cout << ans << "\n";
}
return 0;
}