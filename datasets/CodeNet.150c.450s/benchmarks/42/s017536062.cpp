#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <queue>
#include <vector>
#include <cmath>
#include <cctype>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
#define MAX_N 100000000
#define MAX 
using namespace std;
bool debug=false;

int main(){
  queue<string>str;
  queue<int> que;
  int n,q;
  cin>>n>>q;
  rep(i,0,n){
    string a;
    int b;
    cin>>a>>b;
    str.push(a);
    que.push(b);
  }
  long long time=0;
  while(que.size()){
    string s=str.front();str.pop();
    int a=que.front();que.pop();
    if(q>=a){
      time+=a;
      cout<<s<<" "<<time<<endl;
    }else{
      time+=q;
      str.push(s);
      que.push(a-q);
    }
  }
  return 0;
}