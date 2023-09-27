#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stack>

using namespace std;

int main(){
  stack<int> st;
  int n,i,get;

  cin>>n;

  for(i=0;i<n;i++){
    cin>>get;
    st.push(get);
  }

  for(i=0;i<n;i++){
    cout<<st.top();
    st.pop();
    if(i<n-1){
      cout<<" ";
    }
  }

  cout<<endl;

  return 0;
}