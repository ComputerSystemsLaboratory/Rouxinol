#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;


int w , h;
int land[51][51];

void dfs(int px , int py){
	int tx , ty;
	land[py][px]=0;
	for(int i=-1 ; i<=1 ; ++i){
		for(int j=-1 ; j<=1 ; ++j){
			tx=px+i , ty=py+j;
			if(tx<0 || tx>=w || ty<0 || ty>=h) continue;
			if(land[ty][tx]) dfs(tx , ty);
		}
	}
}


int main(){
	int cnt=0;
	while(cin >> w >> h , w||h){
		for(int i=0 ; i< h ; ++i){
			for(int j=0 ; j< w ; ++j){
				cin >> land[i][j];
			}
		}
		for(int i=0 ; i<h ; ++i){
			for(int j=0 ; j<w ; ++j){
				if(land[i][j]){
					dfs( j , i);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
		cnt=0;
	}
	return 0; 
}