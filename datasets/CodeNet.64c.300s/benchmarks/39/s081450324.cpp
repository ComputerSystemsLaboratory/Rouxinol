#include<iostream>
#define FOR(x) for(int x=0;x<=9;x++)
using namespace std;

int main(){
  int n;
  while(cin>>n){
    int count=0;
    FOR(a){
      FOR(b){
	FOR(c){
	  FOR(d){
	    if(a+b+c+d==n) count++;
	  }
	}
      }
    }
    cout<<count<<endl;
  }
  return 0;
}