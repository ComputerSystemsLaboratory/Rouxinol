#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <string>
using namespace std;

int n;
int W,H;
int check(int x,int y){
	if((0<=x)&&(0<=y)&&(x<=W)&&(y<=H)) return 1;
	return 0;
}

int main(){
	int x,y,r;
	cin >> W >> H >> x >> y >> r;
	int t;
	if(check(x-r,y-r)&&(check(x+r,y-r)&&check(x-r,y+r)&&check(x+r,y+r))) t = 1;
	else t = 0;
	if(t) cout << "Yes" << endl;
	else cout << "No" <<endl;

	return 0;
}