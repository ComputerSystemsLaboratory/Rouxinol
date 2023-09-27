#include<iostream>

using namespace std;

int main(){
    double x1, x2, x3, x4, y1, y2, y3, y4;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
        bool flag[2] = {true, true};
        
        if( (x2 - x1) * (y4 - y1) - (x4 - x1) * (y2 - y1) < 0 )
		flag[0] = false;
		
        else 
		flag[1]=false;
		
        if( (x3-x2) * (y4 - y2) - (x4 - x2) * (y3 - y2) < 0 )
		flag[0] = false;
		
        else 
		flag[1]=false;
		
        if( (x1 - x3) * (y4 - y3) - (x4 - x3) * (y1 - y3) < 0 )
		flag[0] = false;
		
        else 
		flag[1]=false;
		
		if( flag[0] || flag[1] )
		cout << "YES\n";
		else
		cout << "NO\n";
    }
    return 0;
}
