#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int henA,henB,henC;
		cin>>henA>>henB>>henC;
		if(henA>henC){
			swap(henA,henC);
		}
		if(henB>henC){
			swap(henB,henC);
		}
		if(henA*henA+henB*henB==henC*henC)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}