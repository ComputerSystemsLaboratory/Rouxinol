#include <iostream>
#include <string>
using namespace std;

string map[20];
int count,W,H;
int walk(int ,int);

int main(){
	int W,H,x,y,r;
	cin >> W >> H >> x >> y >> r;
	if(x-r>=0 && x+r <= W && y-r >=0 && y+r <= H) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}