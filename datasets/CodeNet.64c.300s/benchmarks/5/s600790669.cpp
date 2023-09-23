#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int heights[10];


	for(int i = 0; i <= 9 ; i++){
		cin >> heights[i];
	}

	sort(heights , heights + 10);

	cout << heights[9] << endl << heights[8] << endl << heights[7] << endl;

return 0;
}