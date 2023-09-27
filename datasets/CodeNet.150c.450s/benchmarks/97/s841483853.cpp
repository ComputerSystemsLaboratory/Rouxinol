#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

struct P{ int x, y; };

int N;
vector<P> p(200);

bool asc1(const P& p1, const P& p2)
{ 
	return p1.x < p2.x;
}

bool asc2(const P& p1, const P& p2)
{ 
	return p1.y < p2.y;
}

int main(){
	while(1){
		cin >> N;
		if(N == 0) break;
		p[0].x = 0;
		p[0].y = 0;
		for (int i = 1; i < N; i++)
		{
			int n, d;
			cin >> n >> d;
			if(d == 0){
				p[i].x = p[n].x-1;
				p[i].y = p[n].y;
			}else if(d == 1){
				p[i].x = p[n].x;
				p[i].y = p[n].y-1;
			}else if(d == 2){
				p[i].x = p[n].x+1;
				p[i].y = p[n].y;
			}else if(d == 3){
				p[i].x = p[n].x;
				p[i].y = p[n].y+1;
			}
		}
		sort(p.begin(), p.begin()+N, asc1);
		cout << (p[N-1].x - p[0].x)+1 << " ";
		sort(p.begin(), p.begin()+N, asc2);
		cout << (p[N-1].y - p[0].y)+1 << endl;
	}
	return 0;
}