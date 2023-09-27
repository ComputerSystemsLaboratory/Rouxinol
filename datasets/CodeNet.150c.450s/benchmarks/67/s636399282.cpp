#include <iostream>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n==0)break;
		int cnt=0;
		int length=0;
		for(int i=n/2+1;i>=0;i--){
			int sum=0;
			length=0;
			for(int j=i;j>0;j--){
				sum+=j;
				length++;
				if(sum==n&&length>=2){
					cnt++;
				}
				else if(sum>n){
					break;
				}
			}
		}

		cout<<cnt<<endl;
	}
	return 0;
}