#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e;
	int x,y,w,h,r;

	cin >> c >> d >> a >> b >> e;

	if(-100 <= a && a <= 100){
		x = a;
	}

	if(-100 <= b && b <= 100){
		y = b;
	}

	if(0 <= c && c <= 100){
		w = c;
	}

	if(0 <= d && d <= 100){
		h = d;
	}

	if(0 <= e && e <= 100){
		r = e;
	}

	if(r <= x && x <= w-r && r <= y && y <= h-r){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}

	return 0;
}