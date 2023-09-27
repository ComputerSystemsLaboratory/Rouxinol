#include <iostream>
#include <vector>
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)
using namespace std;

int main(){
	int n;cin>>n;
  	vector<int> a(n);
  	for(int i=0;i<n;i++) cin>>a.at(i);
  	int count=0;
  for(int i=1;i<n;i++){
  	for(int j=n-1;j>=i;j--){
    	if(a.at(j)<a.at(j-1)){
          swap(int,a.at(j),a.at(j-1));
          count++;
        }
    }
  }
  	for(int i=0;i<n;i++){
      cout<<a.at(i);
      if(i!=n-1){ cout<<" ";}
      else{cout<<endl;}
    }
  cout<<count<<endl;
}
