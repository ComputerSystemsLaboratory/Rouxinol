#include <iostream>
using namespace std;

int main(){
	while(1){
		int m, f, r;
		cin >> m >> f >> r;
		int p = m+f;
		int q = p+r;
		if(q==-3) break;
		if(m==-1 || f==-1 || p<30){
			cout << "F" << endl;
			continue;
		}
		if(p>=80){
			cout << "A" << endl;
			continue;
		}
		if(p<80 && p>=65){
			cout << "B" << endl;
			continue;
		}
		if((p<65 && p>=50) || r>=50){
			cout << "C" << endl;
			continue;
		}
		else cout << "D" <<endl;
	}
	return 0;
}