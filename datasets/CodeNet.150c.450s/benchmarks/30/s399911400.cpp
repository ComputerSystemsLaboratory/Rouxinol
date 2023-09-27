#include <iostream>
#include <vector>
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)
using namespace std;

int main(){
	int n;cin>>n;
  	vector<int> a(n);
  	for(int i=0;i<n;i++)cin>>a.at(i);
  	int mymin;
  	int k,count=0;
  	
  	for(int j=0;j<n-1;j++){
        k=j;
      	mymin=101;
  		for(int i=j;i<n;i++){
    		if(mymin>a.at(i)){
        		mymin=a.at(i);
          		k=i;
        	}
    	}
      if(j!=k){
        swap(int,a.at(j),a.at(k));
        count++;
      }
     }
  	for(int i=0;i<n;i++){
    	cout<<a.at(i);
      	if(i!=n-1) cout<<" ";
    }
  cout<<endl;
  cout<<count<<endl;
}
