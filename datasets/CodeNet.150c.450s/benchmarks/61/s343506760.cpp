#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int n,a,b,c,x,y[100],m,turn;
	while(1){
		cin >> n >> a >> b >> c >> x ;
		if((n==0)&&(a==0)&&(b==0)&&(c==0)&&(x==0)){
			return 0;
		}
		for(int i=0;i<n;i++){
			cin >> y[i];
		}
		m=0;
		for(turn=0;turn<=10000;turn++){
			if(y[m]==x){
				m++;
			}
			if(m==n){
				break ;
			}
			x=(a*x+b)%c;
		}
		if(turn==10001){
			cout << "-1\n";
		}
		else{
			cout << turn << "\n";
		}
	}
return 0;
}