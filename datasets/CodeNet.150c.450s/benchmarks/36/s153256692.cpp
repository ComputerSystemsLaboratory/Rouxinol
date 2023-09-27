#include<iostream>
using namespace std;

int main(){
	int d;
	int x;
	int s;
	
	while(cin >> d){
    s = 0;
		for(int i=d;i<600;i+=d){
			s += d*i*i;
		}
		cout << s << "\n";
	}
	return 0;
}	