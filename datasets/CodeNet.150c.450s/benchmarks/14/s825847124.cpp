#include <iostream>

using namespace std;

void call(int n);
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	call(n);
	return 0;
}

void call(int n){
	for(int i=1; i<=n; i++) {
		int x=i;
		if(x%3==0) {
			cout<<' '<<i;
			continue;
		}
		do{
			if(x%10==3) {
				cout<<' '<<i;
				break;
			}
			x/=10;
		}while(x);
	}
	cout << endl;
}

