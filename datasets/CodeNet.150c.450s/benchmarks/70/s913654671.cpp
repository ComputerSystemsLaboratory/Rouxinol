#include <iostream>
using namespace std;

int getDay(int y,int m,int d){
	if(m<3) m += 12 , y--;
	int J = y/100 , K = y%100;
	return (d + (((m+1)*26)/10) + K + (K/4) + (J/4) + 5*J) % 7;
}
int main(){
	string table[] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
	int m,d;
	while(cin >> m >> d , m){
		cout << table[getDay(2004,m,d)] << endl;
	}
}