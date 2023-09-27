#include <iostream>
using namespace std;

int main() {
	int n;
	int kai[101]={0};
	while(cin>>n){
		kai[n]++;
	}
	
	int max=0;
	for(int i=0; i<101; ++i){
		if(max<kai[i])max=kai[i];
	}
	for(int i=0; i<101; ++i){
		if(max==kai[i])cout<<i<<endl;
	}
	return 0;
}