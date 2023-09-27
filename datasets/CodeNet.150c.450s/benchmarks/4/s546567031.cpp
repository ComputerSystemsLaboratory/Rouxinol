#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

void Result (int mid, int last, int make){
	if(mid == -1 || last == -1 || mid+last < 30) cout << 'F' << endl;
	
	else if(mid+last >= 80) cout << 'A' << endl;
	
	else if(mid+last >= 65) cout << 'B' << endl;
	
	else if(mid+last >= 50 || make >= 50) cout << 'C' << endl;
	
	else if(mid+last >= 30) cout << 'D' << endl;
}


int main(){
	int mid,last,make;
	
	while(true){
		cin >> mid >> last >> make;
		
		if(mid == -1 && last == -1 && make == -1) break;
		
		Result(mid, last, make);
	}
}