#include<bits/stdc++.h>
using namespace std;
int r,c;
int a[20][10010];
int cmax=0;
void solve(int rr){
	if( rr == 0 ){
        int sum=0;
		for(int i=0;i<c;i++){
            int count=0;
			for(int j=0;j<r;j++)
				if( a[j][i] )
					count++;
            sum += count > r / 2 ? count : r - count;
        }
		cmax = max(sum , cmax);
		return;
	}
	solve(rr - 1);                                  //?????£???????????????
	for(int i = 0;i < c;i++)
		a[rr][i] = a[rr][i] ? false : true;
	solve(rr - 1);
    for(int i = 0;i < c;i++)
		a[rr][i] = a[rr][i] ? false : true;
}
int main(){
	while(cin >> r >> c , r){
		cmax=0;
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				cin >> a[i][j];
		solve(r);
		cout << cmax << endl;
	}
	return 0;
}