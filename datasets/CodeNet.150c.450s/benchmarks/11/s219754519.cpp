#include <iostream>
using namespace std;

int main(){
	int n , num;
	char kind;
	bool c[4][13]={false , false};
	cin>>n;
	for(int i=0 ; i<n ; i++){
		cin >> kind >> num;
		switch(kind){
			case 'S':
				c[0][num-1]=true;
				break;
			case 'H':
				c[1][num-1]=true;
				break;
			case 'C':
				c[2][num-1]=true;
				break;
			case 'D':
				c[3][num-1]=true;
		}
	}
	for(int i=0 ; i<4 ; i++){
		for(int j=0 ; j<13 ; j++){
			if(c[i][j]==false){
				switch (i){
					case 0:
					cout << "S " << j+1 << endl;
					break;
					case 1:
					cout << "H " << j+1 << endl;
					break;
					case 2:
					cout << "C " << j+1 << endl;
					break;
					case 3:
					cout << "D " << j+1 << endl;
				}
			}
		}
	}
	return 0;
}