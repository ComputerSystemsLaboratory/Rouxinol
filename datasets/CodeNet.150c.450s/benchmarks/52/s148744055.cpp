#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;
int main(){
  stack<int> train;
  int a;
   while(scanf("%d",&a)!=EOF){
    if(a==0){
    cout<<train.top()<<endl;
    train.pop();
    }
    else {
      train.push(a);
    }
  }
}