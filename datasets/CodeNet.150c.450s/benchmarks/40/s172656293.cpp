#include <bits/stdc++.h>
using namespace std;

class Dice{
public:
	int d[6];
	void MoveN();
	void MoveS();
	void MoveE();
	void MoveW();
};

void Dice::MoveN(){
	swap(d[0],d[1]);
	swap(d[1],d[4]);
	swap(d[1],d[5]);
}
void Dice::MoveS(){
	swap(d[0],d[1]);
	swap(d[0],d[4]);
	swap(d[4],d[5]);
}
void Dice::MoveE(){
	swap(d[0],d[3]);
	swap(d[2],d[3]);
	swap(d[3],d[5]);
}
void Dice::MoveW(){
	swap(d[0],d[2]);
	swap(d[2],d[3]);
	swap(d[2],d[5]);
}

int main(){
	Dice dc;
	string m;
	for(int i=0;i<6;i++) cin>>dc.d[i];
	cin>>m;
	for(int i=0;i<m.size();i++){
		switch(m[i]){
			case 'N':
				dc.MoveN();
				break;
			case 'S':
				dc.MoveS();
				break;
			case 'E':
				dc.MoveE();
				break;
			case 'W':
				dc.MoveW();
		}
	}
	cout<<dc.d[0]<<endl;
	return 0;
}
