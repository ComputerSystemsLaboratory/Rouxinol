#include <iostream>
using namespace std;
int n,m,p,sum,ans;
int x[101];
int main(){
	while(1){
		cin >> n>>m >>p;
		if(n==0&&m==0&&p==0)break;
		sum=0;
		for(int i=1;i<=n;i++){
			cin >>x[i];
			sum+=x[i];
		}
		if(x[m]==0){
			ans=0;
		}else{
			ans=sum*(100-p)/x[m];
		}
		cout <<ans <<endl;
	}
	return 0;
}