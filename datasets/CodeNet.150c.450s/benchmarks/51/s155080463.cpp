#include <iostream>
using namespace std;
int i,t;
bool data[31];
int main(){
	for(i=0;i<31;i++){
		data[i]=0;
	}
	for(i=0;i<28;i++){
		cin>>t;
		data[t]=1;
	}
	for(i=1;i<31;i++){
		if(data[i]==0){
			cout<<i<<endl;
		}
	}
	cin>>t;
	return 0;
}