#include <iostream>

using namespace std;

int main(){

	int n,max=0;
	int s[101]={0};
	while(cin>>n){
		s[n]++;
	}
	for(int i=0;i<101;i++){
		if(max<s[i])
			max=s[i];
	}
	for(int i=0;i<101;i++){
		if(max==s[i])
			cout<<i<<endl;
	}
	
}