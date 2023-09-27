#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int W, H, x, y, r;
	
	cin >> W >> H >> x >> y >> r;
	
	if(max((y + r), H) > H || max((x + r), W) > W || x < 0 || y < 0){
		
		cout << "No" << endl;
	}
	else{
	
	    cout << "Yes" << endl;
	}
	
    return 0;
}