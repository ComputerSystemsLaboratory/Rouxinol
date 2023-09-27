#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int y, m, d, w;
	
	char* str[7] = {"Sun", "Mon", "Tues", "Wednes", "Thurs", "Fri", "Satur"};
	
	while(1){
		cin >> m >> d;
		y = 2004;
		if(m == 0){
			break;
		}
		if(m == 1 || m == 2 ){
			y--;
			m += 12;
		}
		w = (y+y/4-y/100+y/400+(13*m+8)/5+d)%7;

		cout << str[w] << "day" << endl;
	}
	
	return 0;
}