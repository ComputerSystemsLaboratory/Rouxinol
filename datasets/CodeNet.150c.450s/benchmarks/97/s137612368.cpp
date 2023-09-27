#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring> 
#include <algorithm>

using namespace std;

struct zahyou{
	int x;
	int y;
};

typedef struct zahyou Z;

Z a[200];

int main()
{
	int N;
	while(1){
		cin >> N;
		if(N == 0) break;
		a[0].x = 1;
		a[0].y = 1;
		int max_x=1, min_x=0, max_y=1, min_y=0, n, d;
		for(int i = 1; i < N; i++){
			 cin >> n >> d;
			 a[i].x = a[n].x;
			 a[i].y = a[n].y;
			 if(d == 0){
			 	a[i].x--;
				min_x = min(a[i].x-1, min_x); 
			 } else if(d == 1){
			 	a[i].y--;
			 	min_y = min(a[i].y-1, min_y);
			 } else if(d == 2){
			 	a[i].x++;
			 	max_x = max(a[i].x, max_x);
			 } else if(d == 3){
			 	a[i].y++;
			 	max_y = max(a[i].y, max_y);
			 }
		}
		int w, h;
		w = max_x - min_x;
		h = max_y - min_y;
		cout << w << ' ' << h << endl;
	}
	return 0;
}