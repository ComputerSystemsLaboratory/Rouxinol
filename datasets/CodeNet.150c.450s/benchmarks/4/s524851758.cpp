#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int m,f,r;
	cin >> m >> f >> r;
	while(m>=0||f>=0||r>=0){
		if(m<0||f<0||m+f<30){
			cout << "F" << endl;
		}else if(m+f>=80){
			cout << "A" << endl;
		}else if(m+f>=65){
			cout << "B" << endl;
		}else if(m+f>=50||r>=50){
			cout << "C" << endl;
		}else{
			cout << "D" << endl;
		}
		cin >> m >> f >> r;
	}
}