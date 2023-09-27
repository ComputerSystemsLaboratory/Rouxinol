#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
	string str;
	string moto;
	int size,Msize;
	cin >> str;
	size=str.size();
	cin >> moto;
	Msize=moto.size();
	for(int i=0;i<size;i++){
		if(moto[0]==str[i]){
			for(int j=1;j<Msize;j++){
				if(moto[j]!=str[(i+j)%size]) goto LOOP;
			}
			cout << "Yes" <<endl;
			return 0;
		}
		LOOP:;
	}
	cout<<"No"<<endl;
	return 0;
}