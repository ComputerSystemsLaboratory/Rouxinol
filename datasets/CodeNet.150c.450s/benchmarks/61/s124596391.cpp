#include <iostream>

using namespace std;

int main(){

	int a,b,c;
	int x;
	int cnt=0;
	int n;

	while(cin>>n>>a>>b>>c>>x){
		if(n==0&&a==0&&b==0&&c==0&&x==0)break;

		int *y;
		y = new int[n];
		for(int i=0;i<n;i++)cin>>y[i];

		int pos=0;
		cnt=0;

		while(1){
			if(y[pos] == x){
				pos++;
			}

			if(pos==n)break;

			cnt++;
			x = (a*x+b)%c;

			if(cnt>10000){
				break;
			}
		}
		if(cnt==10001){
			cout<<-1<<endl;
		}
		else{
			cout<<cnt<<endl;
		}
	}

	return 0;
}