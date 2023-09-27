#include<algorithm>
#include<iostream>
using namespace std;
int main(){
	int li[1020][12][25] = {};
	int t = 0;
	int y = 0,m = 1,d = 1;
	for(;;t++){
		d++;
		if(m % 2 == 0 && y % 3 != 0){
			if(d == 20){
				d = 1;
				m++;
			}
		}
		else{
			if(d == 21){
				d = 1;
				m++;
			}
		}
		if(m == 11){
			m = 1;
			y++;
		}
		li[y][m][d] = t;
		if(y == 1000 && m == 1 && d == 1)break;
	}
	int n;
	cin>>n;
	while(n--){
		cin>>y>>m>>d;
		cout<<li[1000][1][1] - li[y][m][d]<<endl;
	}
}