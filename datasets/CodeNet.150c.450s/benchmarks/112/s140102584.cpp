#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	int m;
	char data;
	
	bool flg=false;
	while(1){
		cin>>n;
		char a[n+1],b[n+1];
		if(n==0){
			break;
		}
		for(int i=0;i<n;i++){
			cin>>a[i]>>b[i];
		}
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>data;
			flg=false;
			for(int j=0;j<n;j++){
				if(data==a[j]&&!flg){
					data=b[j];
					flg=true;
				}
			}
			cout<<data;
		}
		cout<<endl;
	}
	return 0;
}

		
