#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
using namespace std;
int main(){
  while(1){
    int n,a,b,c,x;
    cin>>n>>a>>b>>c>>x;
    if(n==0) return 0;
    int cnt=0;
    queue<int> que;
    for(int i=0;i<n;i++){
      int a;
      cin>>a;
      que.push(a);
    }
    while(!que.empty()&&cnt<=10001){
      if(x==que.front()){
        que.pop();
      }
      x=(a*x+b)%c;
      cnt++;
    }
    cout<<(cnt>10001?-1:cnt-1)<<endl;
  }
}

