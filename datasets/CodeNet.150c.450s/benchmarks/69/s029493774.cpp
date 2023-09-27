#include <iostream>
using namespace std;
int main(){
	int n,j,j1,j2,a;
	cin>>n;
	for(int i=0;i<n;i++){
		j1=j2=0;a=1;
		for(int k=0;k<10;k++){
			cin>>j;
			if(j1<j&&j2<j){if(j1<j2)j2=j;else j1=j;
			}else if(j1<j)j1=j;
			else if(j2<j)j2=j;
			else a=0;
		}
		if(a==1)cout<<"YES"<<endl;else cout<<"NO"<<endl;
	}
	return 0;
}