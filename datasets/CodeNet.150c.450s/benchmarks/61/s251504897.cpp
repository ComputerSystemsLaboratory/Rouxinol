#include<iostream>
using namespace std;
int main(){
	while(1){
		int n,a,b,c,x,y,sum=0;
		cin >> n >> a >> b >> c >> x;
		if(!n&&!a&&!b&&!c&&!x)	break;
		for(int i=0;i<n;i++){
			cin >> y;
			while(1){
				if(x==y){
					if(i==n-1)	break;
					x = (a*x+b)%c;
					sum++;
					break;
				}
				x = (a*x+b)%c;
				sum++;
				if(sum>10000)	break;
			}
		}
		if(sum>10000)	cout << -1 << endl;
		else	cout << sum << endl;
	}
}
