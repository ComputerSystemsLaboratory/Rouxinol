#include <iostream>
#include <cstring>
using namespace std;

int main(void){
	int i,j,x,y,n,m,d,sum;
	int field[24][24];
	string s;

	while(cin>>n && n){
		sum = 0;
		memset(field,0,sizeof(field));
		for(i=0;i<n;i++){
			cin>>x>>y;
			field[y][x] = 1;
		}
		cin>>m;
		i=j=10;
		while(m--){
			cin>>s>>d;
			while(d--){
				if(s == "N") i++;
				if(s == "S") i--;
				if(s == "W") j--;
				if(s == "E") j++;
				if(field[i][j] == 1){
					sum++;
					field[i][j] = 0;
				}
			}
		}
		if(sum == n) cout<<"Yes\n";
		else cout<<"No\n";
	}

	return 0;
}