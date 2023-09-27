#include <iostream>
#include <math.h>
using namespace std;
int main(){
	while(1){
		int n,a,b,c,x;
		int y[101]={0};
		cin >> n>>a>>b>>c>>x;
		if(n==0&&a==0&&b==0&&c==0&&x==0) break;
		for(int i=1;i<=n;i++){
			cin >> y[i];
		}
		int count=0;
		int slot = 1;
		while(count<=10000){
				
				if ( x ==y[slot] ){

					slot +=1;
				
				}
				if (slot > n) break;
				count +=1;
				x =(a*x+b)%c;
			}
		if(count==10001) cout <<-1 <<endl;
		else cout <<count <<endl;
		

	}
	return 0;
}