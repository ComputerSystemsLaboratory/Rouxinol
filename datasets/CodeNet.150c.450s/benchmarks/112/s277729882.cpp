#include <iostream>

using namespace std;

int main(){
	while(1){
		int n,m;
		cin>>n;
		if(n==0) break;
		char map[n][2];
		for(int i=0;i<n;i++){
			cin>>map[i][0]>>map[i][1];
		}
		cin>>m;
		char result[m+1];
		for(int i=0;i<m;i++){
			cin>>result[i];
			for(int j=0;j<n;j++){
				if(result[i]==map[j][0]){
					result[i]=map[j][1];
					break;
				}
			}
		}
		result[m]=0;
		cout<<result<<endl;
	}
	return 0;
}