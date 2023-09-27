#include <iostream>
using namespace std;

int main(void){
	int n,a,b,c,x,y;
	int frame;

	while(cin>>n>>a>>b>>c>>x && n){
		frame = -1;
		while(n--){
			cin>>y;

			while(x!=y && frame<=10000){
				x = (a * x + b) % c;
				frame++;
			}
			x = (a * x + b) % c;
			frame++;
		}

		if(frame > 10000) frame = -1;
		cout<<frame<<endl;
	}

	return 0;
}