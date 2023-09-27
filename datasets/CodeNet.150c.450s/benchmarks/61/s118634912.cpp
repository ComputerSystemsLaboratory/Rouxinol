#include <iostream>
using namespace std;

int main(void){
	int n,a,b,c,x;
	int y[100];

	while(cin>>n>>a>>b>>c>>x && n){
		for(int i=0;i<n;i++){
			cin>>y[i];
		}

		int now = 0; //»ÝÌ[Ô
		int flame = 0;
		while(1){
			if(x == y[now]){
				now++;
				if(now == n) break;
			}

			x = (a * x + b) % c;
			flame++;

			if(flame > 10000){
				flame = -1;
				break;
			}
		}
		cout<<flame<<endl;
	}

	return 0;
}