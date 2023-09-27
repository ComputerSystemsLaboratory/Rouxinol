#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
	string str[100];
	int k = -1;
	double x1, y1, x2, y2, x3, y3, xp, yp;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
		k++;
		for(int i = 0; i < 3; i++){
			if(y1 != y2 && x1 != x2){
				double b, c, d;
				b = (x1-x2)/(-y1+y2);
				c = (-y1*x2+y2*x1)/(-y1+y2);
				d = x3+b*y3;
				if(((c-xp)/b > yp && yp < (d-xp)/b) || ((c-xp)/b < yp && yp > (d-xp)/b)){
					str[k] = "NO";
					continue;
				}
			}
			else if(y1 == y2){
				if((y1 > yp && yp < y3) || (y1 < yp && yp > y3)){
					str[k] = "NO";
					continue;
				}
			}
			else if(x1 == x2){
				if((x1 > xp && xp < x3) || (x1 < xp && xp > x3)){
					str[k] = "NO";
					continue;
				}
			}
			str[k] = "YES";
			swap(x2,x3);
			swap(x2,x1);
			swap(y2,y3);
			swap(y2,y1);
		}
	}
	for(int i = 0; i < k+1; i++){
		cout << str[i] << endl;
	}
}