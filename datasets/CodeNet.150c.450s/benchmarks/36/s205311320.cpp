#include <iostream>
using namespace std;

int main(void){
	int d;
	int s;
	int i;

	while(cin >> d){
		s=0;
		for(i=0;i<600;i+=d){
			s+=(i*i*d);
		}
		cout << s << endl;
	}
	return 0;
}