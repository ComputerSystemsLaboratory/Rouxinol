#include<iostream>
using namespace std;

int main(){
	int m=0,f=0,r=0;
	while(m+f+r!=-3){
		cin >> m >> f >> r;
		if((m==-1||f==-1)&&m+f+r>=-2){
			cout << "F" <<endl;
		}
		else if(m+f>=80){
			cout << "A" <<endl;
		}
		else if(m+f>=65){
			cout << "B" <<endl;
		}
		else if(m+f>=50){
			cout << "C" <<endl;
		}
		else if(m+f>=30){
			if(r>=50){cout << "C" <<endl;}
			else {cout << "D" <<endl;}
		}
		else if(m+f+r>=-2){cout << "F" <<endl;}
	}
}