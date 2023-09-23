#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		int ans=0;
		for(int i=2;n>=((1+i)*i/2);i++){
			if(i%2==1){
				if(n%i==0){
					ans++;
				}
			}
			else{
				if(n%i==(i/2)){
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}