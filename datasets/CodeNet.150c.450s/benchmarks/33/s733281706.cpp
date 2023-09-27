#include <iostream>
using namespace std;
int x;
int zeinuki(int n){
for(int i = n;i >= 0;i--){
	if((i * (100 + x))/100 == n)return i;
	}
	return 0;
}

int main() {
	int y,s,ax,ay,ymax;
	while(1){
		ymax = 0;
		cin >> x >> y >> s;
		if(x == 0)break;
		for(int i = 1;i <= s/2;i++){
			//cout << i << " " << s - i << endl;
			ax = zeinuki(i);
			ay = zeinuki(s-i);
			//cout << ax << " " << ay <<endl;
			ax = ax * (100 + y)/100;
			ay = ay * (100 + y)/100;
			ymax = max(ymax,(ax + ay));
			//cout << ax << " " << ay <<  " " << ymax << endl;
		}
		cout << ymax << endl;
	}
	
	return 0;
}