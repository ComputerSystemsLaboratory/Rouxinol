#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n,n!=0){
		int cnt=0;
		for(int i=1;i<=1000;i++){
			int sum=0;
			if(n==sum)cnt++;
			for(int j=i;j<=1000;j++){
				sum+=j;
				if(n==sum){cnt++;}

			}
		}
		cout<<cnt-1<<endl;
	}
	return 0;
}