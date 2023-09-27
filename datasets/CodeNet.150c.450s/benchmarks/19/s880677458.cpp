#include <iostream>
using namespace std;
void swap(int &x,int & y){
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int x,y;
	cin>>x;
	cin>>y;
	while( !(x == 0 && y== 0)){
		if( x > y){
			swap(x,y);
		}
		cout<< x <<" "<<y<<endl;
		cin>>x;
		cin>>y;
	}
	return 0;
}