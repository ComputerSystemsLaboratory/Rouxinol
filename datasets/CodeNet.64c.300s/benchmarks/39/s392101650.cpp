#include<iostream>

using namespace std;


int main(void){
	
	int n;
	while(cin>>n){
		
		int ans = 0;
		for(int i=0;i<=9;i++){
			for(int j=0;j<=9;j++){
				for(int k=0;k<=9;k++){
					for(int p=0;p<=9;p++){
						if(i+j+k+p == n)ans++;
					}
				}
			}
		}
		
		cout<<ans<<endl;
	}
}