#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int n;
	int a[1000];

	while(1){
		cin>>n;

		if(n==0)
			break;

		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int diff=1000000;

		for(int i=0;i<(n-1);i++){
			for(int j=i+1;j<n;j++){
				if(diff>abs(a[i]-a[j]))
					diff=abs(a[i]-a[j]);
			}
		}

		cout<<diff<<endl;
	
	}

	return 0;
}