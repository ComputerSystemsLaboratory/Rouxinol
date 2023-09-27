#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

int day_of_week(int y,int m,int d){
	static int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
	y-=m < 3;
	return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7 ;
}

int main(){
	int m , d , w=4 , fw;
	while (cin >> m >> d, m){
		switch(day_of_week(2004,m,d)){
			case 0:
			cout << "Sunday" << endl;
			break;
			case 1:
			cout << "Monday" << endl;
			break;
			case 2:
			cout << "Tuesday" << endl;
			break;
			case 3:
			cout << "Wednesday" << endl;
			break;
			case 4:
			cout << "Thursday" << endl;
			break;
			case 5:
			cout << "Friday" << endl;
			break;
			case 6:
			cout << "Saturday" << endl;
		}
	}
	return 0; 
}