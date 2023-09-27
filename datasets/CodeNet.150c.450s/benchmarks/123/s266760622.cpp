#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool issosuu(int x){
	if(x==2) return true;  
	if(x%2==0 || x==1) return false;
  	int i=3;
  	while(i<=sqrt(x)){
    	if(x%i==0) return false;
      	i+=2;
    }
  	return true;
}

int main(){
	int n;cin>>n;
  	vector<int> a(n);
  	for (int i=0;i<n;i++){
    	cin>>a.at(i);
    }
  int count=0;
  for(int i=0;i<n;i++){
    if(issosuu(a.at(i))) count++;    
}
       cout<<count<<endl;
}
