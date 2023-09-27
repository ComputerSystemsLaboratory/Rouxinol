#include<iostream>
#include<string>

using namespace std;

#define loop(i,a,b) for(int i = a; i < b ; i ++)
#define rep(i,a) loop(i,0,a)

int main(void){
  string s;
  cin>>s;
  for(int i = s.size() - 1 ; i >= 0 ; i --){
    cout<<s[i];
  }
  cout<<endl;

}