#include <bits/stdc++.h>
using namespace std;
int main(){
string s,d;
cin>>s>>d;
s+=s;
if(s.find(d)<s.size())cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}