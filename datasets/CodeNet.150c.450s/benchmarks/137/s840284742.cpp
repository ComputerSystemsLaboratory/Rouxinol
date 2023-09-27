#include<bits/stdc++.h>
using namespace std;


int main(){
  int i,n;
  cin>>n;
  string order,word;
  unordered_set<string> d;
  for(i=0;i<n;i++){
    cin>>order>>word;
    if(order[0]=='i'){
      d.insert(word);
    }else{
      if(d.count(word)==0){
	printf("no\n");
      }else{
	printf("yes\n");
      }
    }
  }
}