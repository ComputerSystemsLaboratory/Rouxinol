#include <iostream>
using namespace std;

int main()
{
	int H[10],temp,it;
	for(int i = 0;i < 10;i++)
		cin >> H[i];
	for(int j = 0;j < 3;j++){
		temp = 0;
		for(int i = 0;i < 10;i++)
			if(temp < H[i]){
				temp = H[i];
				it = i;
			}
		cout << temp << endl;
		H[it] = 0;
	}
	return 0;
}