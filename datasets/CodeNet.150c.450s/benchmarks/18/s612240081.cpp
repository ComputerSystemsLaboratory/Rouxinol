#include <iostream>
using namespace std;

int main(){
	int week, yen=100000, hasuu;
	cin>>week;
	while(week--){
		yen = yen*1.05;
		if(hasuu=yen%1000){
			yen += 1000-hasuu;
		}
	}
	cout << yen <<endl;
	return 0;
}