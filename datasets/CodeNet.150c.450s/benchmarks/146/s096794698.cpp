#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cmath>
#include <stack>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
using namespace std;

bool parallel(double x1, double y1, double x2, double y2){
	double vec;
	vec = x1*y2 - x2*y1;
	if (vec < 0.0000000001 && vec > -0.0000000001) return true;
	return false;
}

int main(){
    int n;
    double x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> n;
    REP(i, n) {
    	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    	if (parallel(x1-x2, y1-y2, x3-x4, y3-y4)) cout << "YES" << endl;
    	else cout << "NO" << endl;
    }
}
