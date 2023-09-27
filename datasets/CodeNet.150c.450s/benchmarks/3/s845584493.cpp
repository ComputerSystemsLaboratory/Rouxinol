#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
#include <cmath>
#include <cctype>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
#define MAX_N 100000000
using namespace std;
bool debug=false;

int main(){
  int n;
  string str;
  cin>>str>>n;
  rep(i,0,n){
    int a,b;
    string s;
    cin>>s;
    if(s=="replace"){
      string c;
      cin>>a>>b>>c;
      for(int i=a;i<=b;i++)str[i]=c[i-a];
    }else if(s=="reverse"){
      cin>>a>>b;
      reverse(str.begin()+a,str.begin()+b+1);
    }else if(s=="print"){
      cin>>a>>b;
      for(int i=a;i<=b;i++)cout<<str[i];
      cout<<endl;
    }

  }

  return 0;
}