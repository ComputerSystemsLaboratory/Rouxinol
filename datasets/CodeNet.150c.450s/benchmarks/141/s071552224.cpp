#include<iostream>
#include<cstdio>
using namespace std;

struct Point { double x,y;} p[4];

bool isIntersect(int i, int j, int k, int l){
	double kd = ((p[i].x - p[j].x) * (p[k].y - p[i].y) + (p[i].y - p[j].y) * (p[i].x - p[k].x));
	double ld = ((p[i].x - p[j].x) * (p[l].y - p[i].y) + (p[i].y - p[j].y) * (p[i].x - p[l].x));
	return (kd*ld<0);
}

int main(){
	while(1){
		if(cin.eof()) break;
		for(int i=0; i<4; i++)
			cin >> p[i].x >> p[i].y;
		if(!cin.eof()){
			if (isIntersect(0, 1, 2, 3) || isIntersect(0, 2, 1, 3) || isIntersect(1, 2, 0, 3))
				cout << "NO";
			else cout << "YES";
			cout << endl;
		}
	}
	return 0;
}