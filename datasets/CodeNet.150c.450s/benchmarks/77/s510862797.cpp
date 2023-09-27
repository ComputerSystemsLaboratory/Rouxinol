#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    int n, m, x, y, l;
    bool t[21][21];
    char d;
    while(true){
	cin >> n;
	if(n == 0)return 0;
	memset(t, false, sizeof(t));
	int xx = 10, yy = 10;
	for(int i = 0;i < n;i++){
	    cin >> x >> y;
	    t[x][y] = true;
	}

	cin >> m;
	for(int i = 0;i < m;i++){
	    cin >> d >> l;
	    int xs = 0, ys = 0;
	    if(d == 'N')ys = 1;
	    if(d == 'E')xs = 1;
	    if(d == 'S')ys = -1;
	    if(d == 'W')xs = -1;
	    while(l--){
		xx += xs, yy += ys;
		t[xx][yy] = false;
	    }
	}

	bool comp = true;
	for(int i = 0;i <= 20;i++)
	    for(int j = 0;j <= 20;j++)
		if(t[i][j])
		    comp = false;
	if(comp)
	    cout << "Yes" << endl;
	else
	    cout << "No" << endl;
    }
}