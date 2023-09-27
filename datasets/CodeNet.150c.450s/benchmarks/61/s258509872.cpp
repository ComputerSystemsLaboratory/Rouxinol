#include <iostream>
using namespace std;

int n,a,b,c,x,ans;
int y[101];
int main(){
	while(1){
		cin >>n >>a >>b >>c >>x;
		if(!(n||a||b||c||x))break;
		for(int i=0;i<n;i++){
			cin >>y[i];
		}
		ans=0;
		int i=0,j=0;
		for(i=0;i<=10000;i++){
			if(x==y[j]){
				j++;
			}
			if(j==n)break;
			if(i==10000){
				i=-1;
				goto END;
			}
			x=(a*x+b)%c;
		}
		END:
		cout << i<<endl;
	}
	return 0;
}