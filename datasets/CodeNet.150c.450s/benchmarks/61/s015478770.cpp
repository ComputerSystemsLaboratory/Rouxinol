#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,a,b,c,x;
	int y;
	int frame;

	while(1){
		cin>>n>>a>>b>>c>>x;
		if(n+a+b+c+x==0) break;

		frame=0;

		for(int i1=0;i1<n;i1++){
			cin>>y;
			if(x==y && i1==0) continue;
			while(1){
				x=(a*x+b)%c;
				frame++;
				if(x==y) break;
				if(frame>10000) break;
			}
		}

		if(frame>10000) cout<<-1<<endl;
		else cout<<frame<<endl;
	}
	return 0;
}