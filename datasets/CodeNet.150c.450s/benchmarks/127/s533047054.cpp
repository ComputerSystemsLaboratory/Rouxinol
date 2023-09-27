#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define all(in) in.begin(),in.end()
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    string s;
    cin>>s;
    set<string>se;
    loop(i,1,s.size()){
      string a,b;
      a=s.substr(0,i);
      b=s.substr(i);
      se.insert(a+b);se.insert(b+a);
      reverse(all(a));
      se.insert(a+b);se.insert(b+a);
      reverse(all(b));
      se.insert(a+b);se.insert(b+a);
      reverse(all(a));
      se.insert(a+b);se.insert(b+a);
    }
    cout<<se.size()<<endl;
  }
}