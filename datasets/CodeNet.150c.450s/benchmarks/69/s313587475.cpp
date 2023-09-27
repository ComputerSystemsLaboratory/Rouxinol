#include <iostream>
#include <stack>
using namespace std;
stack<int> r,l;
int m[10],hantei=0;;

void dfs(int i){
  //cout<< i << endl;///////////
  if(i==10)hantei=1;
  if(m[i]>r.top()){
    r.push(m[i]);
    dfs(i+1);
    r.pop();
  }
  if(m[i]>l.top()){
    l.push(m[i]);
    dfs(i+1);
    l.pop();
  }
}

int main(){
  int b,i;
  cin >> b;
  for(int k=0;k<b;k++){
    for(int j=0;j<10;j++)cin>>m[j];  
    r.push(m[0]);
    l.push(0);
    i=1;
    hantei=0;
    dfs(i);
    if(hantei==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
  }
}