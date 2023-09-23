#include <iostream>
#include <vector>
using namespace std;

int main() {
	while(true){
		int n,m,p;
		cin>>n>>m>>p;
		if(n==0&&m==0&&p==0)break;
		vector<int>x(n);
		for(int i=0;i<n;i++)cin>>x[i];
		int sum=0;
		for(int i=0;i<n;i++)sum+=x[i];
		if(x[m-1]==0)cout<<0<<endl;
		else cout<<sum*(100-p)/x[m-1]<<endl;	
	}
	return 0;
}
