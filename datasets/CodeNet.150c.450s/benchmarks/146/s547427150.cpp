#include <iostream>

using namespace std;

int main(){
	int n;
	double x1,x2,x3,x4;
	double y1,y2,y3,y4;
	cin >> n;
	while(n--){
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		cin >> x3 >> y3;
		cin >> x4 >> y4;
	
	
		if( (x1-x2==0&&x3-x4==0) || (y1-y2==0&&y3-y4==0) ){
			cout << "YES" << endl;
			continue;
		}else if(x1-x2==0||x3-x4==0||y1-y2==0||y3-y4==0){
			cout << "NO" << endl;
			continue;
		}else{			
			if( (x1-x2)/(y1-y2) == (x3-x4)/(y3-y4) )
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
}
	