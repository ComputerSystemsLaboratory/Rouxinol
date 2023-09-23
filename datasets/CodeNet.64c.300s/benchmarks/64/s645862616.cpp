#include<iostream>
#include<vector>

using namespace std;

int GCB(int x,int y)
{	
	int z = y;
	y = x % y;
	x = z;
	
	if(y==0)return x;
	
	return GCB(x,y);
}

int main()
{	
	int x,y;
	cin >> x >> y;
	
	if(x<y){
		int z = x;
		x = y;
		y = z;
	}
	cout << GCB(x,y) << endl;
	
	return 0;
}