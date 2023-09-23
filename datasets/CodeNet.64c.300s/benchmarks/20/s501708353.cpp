#include<iostream>
using namespace std;

int main(){
	int d;
	int s=0;
	while (cin >> d){
		for (int i = 0; i < 600/d ; i++){
			s = s + i*d*i*d*d;
		}
		cout << s << endl;
		s = 0;
	}
}
