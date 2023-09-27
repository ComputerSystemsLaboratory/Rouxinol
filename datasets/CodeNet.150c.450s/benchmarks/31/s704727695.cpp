#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
	int n;cin>>n;
  	vector<int> a(n);
  	
  	for(int i=0;i<n;i++){
    	cin>>a.at(i);
    }
  	int mymax=-2000000000,mymin=a.at(0);
  	for(int i=1;i<n;i++){
  		mymax=max(mymax,a.at(i)-mymin);
      	mymin=min(mymin,a.at(i));
    }
     cout<<mymax<<endl;
}
