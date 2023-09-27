#include <iostream>
using namespace std;

int main(){ 
    int m,f,r;
    cin >> m >> f >> r;
    while (m+f!=-2){
    	if (m==-1 || f==-1){
			cout << "F" << endl;
		}else if (m+f>=80){
    		cout << "A" << endl;
		}else if (m+f>=65){
			cout << "B" << endl;
		}else if (m+f>=50 || (m+f>=30 && r>=50)){
			cout << "C" << endl;
		}else if (m+f>=30){
			cout << "D" << endl;
		}else{
			cout << "F" << endl;
		}
		cin >> m >> f >> r;
	}
} 
