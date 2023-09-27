#include<iostream>
#include<cstdio>
#include<map>
using namespace std ;
int main(){
 
  int n;
  char a,b; 
  for(;;){
 map<char,char> a2b;
    cin>>n;
    if(n==0)break;
    for(int i=0;i<n;i++){
      cin >> a >> b;
      a2b[a]=b;
	}
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>a;
      if(a2b.count(a)==0){
	cout<<a;
      }
      else cout<<a2b[a];
      }
    cout<<endl;
  }
  return 0;
}