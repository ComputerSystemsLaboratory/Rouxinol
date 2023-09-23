#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int m, f, r, a;
	for(int i=0;;i++){
		cin >> m >> f >> r;
		if(m==-1&&f==-1&&r==-1){
			break;
		}else{
			a=m+f;
			if(m==-1||f==-1){
				cout << "F" << endl;
			}else if(a>=80){
				cout << "A" << endl;
			}else if(a<80&&a>=65){
				cout << "B" << endl;
			}else if(a<65&&a>=50){
				cout << "C" << endl;
			}else if(a<50&&a>=30){
				if(r>=50){
					cout << "C" << endl;
				}else{
					cout << "D" << endl;
				}
			}else if(a<30){
				cout << "F" << endl;
			}
		}
	}
	return 0;
}