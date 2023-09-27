#include <iostream>
using namespace std;
int n;
int main(){
	while(cin>>n){
		if(n==0) break;
		int s=0,a=0,num=0;
		while(s<n){
			a++;
			s=s+a;
		}
		for(int i=2;i<=a;i++){
			for(int j=1;j<((n/i)+1);j++){
				int t=0;
				for(int k=j;k<j+i;k++){
					t=t+k;
				}
				if(t==n) num++;
			}
		}
		cout<<num<<endl;
	}
    return 0;
}