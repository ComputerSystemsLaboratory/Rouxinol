#include <iostream>
using namespace std;

int memo[31];

int main(){
	int n,ans;
	
	memo[0]=1;
	memo[1]=1;
	memo[2]=2;
	
	for(int i=3;i<31;i++){
		memo[i]=memo[i-1]+memo[i-2]+memo[i-3];
	}
	
	while(cin>>n){
		if(n==0)break;
		cout<<memo[n]/(365*10)+1<<endl;
	}
	
	return 0;
}