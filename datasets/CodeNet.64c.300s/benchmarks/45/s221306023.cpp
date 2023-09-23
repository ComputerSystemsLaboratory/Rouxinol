#include <iostream>
using namespace std;
int main(){
	int n,m,p;
	while(cin>>n>>m>>p){
		if(n==0&&m==0&&p==0) break;
		int x[n];
		for(int i=0;i<n;i++){
			cin>>x[i];
		}
		if(x[m-1]==0){
			cout<<0<<endl;
		}
		else{
			int t=0;
			for(int i=0;i<n;i++){
				t=t+x[i];
			}
			cout<<(t*(100-p))/x[m-1]<<endl;
		}
	}
    return 0;
}