#include <iostream>
using namespace std;
int main(){
	int n,a,b,c,x;
	while(cin>>n>>a>>b>>c>>x){
		if(n==0) break;
		int y[n];
		for(int i=0;i<n;i++){
			cin>>y[i];
		}
		int k=0;
		for(int i=0;i<=10000;i++){
			if(y[k]==x){
				k++;
			}
			if(k==n){
				cout<<i<<endl;
				break;
			}
			x=(a*x+b)%c;
		}
		if(k<n){
			cout<<-1<<endl;
		}
	}
    return 0;
}