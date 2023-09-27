#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
int main(){
  string s;
  int out[256]={0};
  while(getline(cin,s)){
    rep(i,s.size()){s[i]=tolower(s[i]);out[s[i]]++;}
  }
    for(char i='a';i!='z'+1;i++)cout<<i<<" : "<<out[i]<<endl;
}