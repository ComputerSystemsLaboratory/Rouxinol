#include<iostream>
using namespace std;

int main(){

	int n, x, y, pt1, pt2;

	while(cin >> n){
		pt1 = 0;
		pt2 = 0;
	
		if(n == 0) break;
		
		for(int i=0; i<n; i++){
			cin >> x >> y;
			
			if(x > y) pt1 += x + y;
			else if(x < y) pt2 += x + y;
			else {
				pt1 += x;
				pt2 += y;
			}
		}
		
		cout << pt1 << " " << pt2 << endl;
	}

	return 0;

}