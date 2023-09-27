#include <iostream>
using namespace std;

int main(void){
	int m,n1,n2,a,b;
	int p[201];
	while(cin>>m>>n1>>n2,m||n1||n2){
		for(int i=0;i<m;i++)cin>>p[i];
		a=0;b=0;
		for(int i=n1;i<=n2;i++){
			if(a<=p[i-1]-p[i]){
				b=i;
				a=p[i-1]-p[i];
			}
		}
		cout<<b<<endl;
	}
	return 0;
}