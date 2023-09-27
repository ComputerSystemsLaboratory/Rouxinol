#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);
	int height[10];
	for(int i = 0; i < 10; i++)
		cin >> height[i];

	sort(height,height + 10);

	for(int i = 9; i >= 7; i--)
		cout << height[i] << endl;
	//while(1){}
    return 0;
}