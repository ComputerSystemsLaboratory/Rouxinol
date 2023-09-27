#include <iostream>
using namespace std;
const int MAX_N =1000000;
int main(){
	bool sosu[MAX_N]={};//false:sosu
	for(int i=2;i<MAX_N;i++){
		if(!sosu[i]){
			for(int j=2;j*i<MAX_N;j++){
				sosu[j*i]=true;
			}
		}
	}
	for(int n;cin>>n;){
		int ans=0;
		for(int i=2;i<=n;i++){
			if(!sosu[i])ans++;
		}
		cout<<ans<<endl;
	}
    return 0;
}