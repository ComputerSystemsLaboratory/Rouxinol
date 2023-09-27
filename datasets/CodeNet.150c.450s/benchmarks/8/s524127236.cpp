#include <iostream>
#include <string>
using namespace std;

int main(){
	long n;
	cin >> n;
	long tPoint = 0, hPoint = 0;
	for (long i = 0; i < n; i++){
		string tarou, hanako;
		cin >> tarou >> hanako;
		if (tarou < hanako) hPoint += 3;
		else if (tarou == hanako){
			tPoint++;
			hPoint++;
		}
		else tPoint += 3;
	}
	cout << tPoint << " " << hPoint << endl;
}