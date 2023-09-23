//
//  main.cpp

#include <iostream>
using namespace std;


int main(){
	int a,b,c,d,A,B,C,D;
	cin >> a >> b >> c >> d >> A >> B >> C >> D;
	cout << max(a+b+c+d,A+B+C+D) << endl;
	
	return 0;
}