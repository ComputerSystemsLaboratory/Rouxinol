#include <iostream>

using namespace std;


int n,a,b,c,x;

int next(int x){
	int res=(a*x+b)%c;
	return res;
}

int d[110];

int main(void){
	
	while(cin >> n,n){
		cin >> a >> b >> c >> x;

		for(int i=0;i<n;i++) cin >> d[i];
		
		int index=0;
		int ans=-1;

		for(int i=0;i<=10001;i++){
			if(index==n){
				ans=i-1;
				break;
			}
			if(x==d[index])
				index++;
			x=next(x);
		}
		cout << ans << endl;
	}
	return 0;
}