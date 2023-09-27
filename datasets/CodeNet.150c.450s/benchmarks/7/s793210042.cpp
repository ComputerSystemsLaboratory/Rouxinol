#include <iostream>
using namespace std;

int main()
{
	int top, stop, sstop, obj;
	top = stop = sstop = 0;
	for (int i = 0; i < 10; i++){
		cin >> obj;
		if (obj > top){
			sstop = stop;
			stop = top;
			top = obj;
		}else if (obj > stop){
			sstop = stop;
			stop = obj;
		}else if (obj > sstop){
			sstop = obj;
		}
	}
	cout << top << "\n" << stop << "\n" << sstop << endl;
}