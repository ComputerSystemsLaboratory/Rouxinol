#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
	int x,y;
	while(1){
		cin >> x >> y;
		if(x==0 && y==0)break;
		if(x>y) swap(x,y);
		cout << x << " " << y << endl;
	}
	return 0;
}