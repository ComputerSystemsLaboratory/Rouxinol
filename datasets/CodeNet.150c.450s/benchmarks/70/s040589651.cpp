#include<iostream>
#include<string>
#include<memory.h>
using namespace std;
int main()
{
	//2004-1-1 Tuesday
	int a[370];
	string youbi[7] = {
		 "Monday", "Tuesday","Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	int m[13] = { 0,0, 31,60 ,91,121, 152, 182,213 , 244, 274, 305, 335 };
	for (int i = 3; i <= 365+3; i++){
		a[i] = i % 7;
	}
	while (true){
		int x, y;
		cin >> x >> y;
		if (x == 0 && y == 0)break;
		cout << youbi[a[m[x] + y + 2]] << endl;
	}
}