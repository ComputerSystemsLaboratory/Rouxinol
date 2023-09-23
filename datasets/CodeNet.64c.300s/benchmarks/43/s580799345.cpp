#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	int t[2][4];
	int S[2]={0};
	
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			cin>>t[i][j];
			S[i]+=t[i][j];
		}
	}
	
	cout<<max(S[0],S[1])<<endl;
}