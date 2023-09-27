#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;

#define P pair<int, int>

int le(int h, int w) {
	return h*h+w*w;
}

int main()
{	
	int h,w;
	while (cin >> h >> w, h) {
		P low = make_pair(le(w, h), h);
		P high = make_pair(le(150, 150), 150);
		P p;
		for (int i = 1; i <= 150; i++) {
			for (int j = 1; j < i; j++) {
				P t = make_pair(le(i,j), j);
				if (low < t && t < high) {
					high = t;
					p = make_pair(j, i);
				} 
			}
		}
		cout << p.first << " " << p.second << endl;
	}

	return 0;
}