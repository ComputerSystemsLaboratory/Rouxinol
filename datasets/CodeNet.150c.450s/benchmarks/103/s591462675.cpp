#include<bits/stdc++.h>
using namespace std;

int main(){
int a[15][200]{};
a[0][0]=1;
for(int b=0;b<=9;b++){
	for(int c=100;c>=b;c--){
		for(int d=10;d!=0;d--){
			a[d][c]+=a[d-1][c-b];
		}
	}
}
int x,y;
while(cin>>x>>y,x|y){
	printf("%d\n",a[x][y]);
}
}