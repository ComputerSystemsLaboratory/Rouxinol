
#include <iostream>
using namespace std;

int main() {
	int syo,tyu,dai;
	cin >> syo >> tyu >> dai;
	if(syo > tyu){
		swap(syo,tyu);
	}
	if(tyu > dai){
		swap(tyu,dai);
	}
	if(syo > tyu){
		swap(syo,tyu);
	}
	cout << syo << " " <<  tyu << " " << dai << endl;
	return 0;
}