#include <iostream>
using namespace std;

int zeller(int y, int m, int d)
{
	int h;
	int C = y / 100;
	int Y = y % 100;
	int R = (-2 * C) + (C / 4);
	
	if (m <= 2){
		m += 14;
	}
	
	h = d + (26 * ++m / 10) + Y + (Y / 4) + R;
	h = h % 7 + 7;
	h %= 7;
	return (h);
}

int main()
{
	int y = 2004;
	int m, d;
	int h;
	
	while (1){
		
		cin >> m >> d;
		if (m == 0){
			break;
		}
		
		h = zeller(y, m, d);
		
		//cout << h << endl;
		switch (h){
		  case 0:
		    cout << "Saturday";
			break;
			
		  case 1:
		    cout << "Sunday";
			break;
			
		  case 2:
		    cout << "Monday";
			break;
			
		  case 3:
		    cout << "Tuesday";
			break;
			
		  case 4:
		    cout << "Wednesday";
			break;
			
		  case 5:
		    cout << "Thursday";
			break;
			
		 case 6:
		   cout << "Friday";
		   break;
		}
		cout << endl;
	}
	
	return (0);
}