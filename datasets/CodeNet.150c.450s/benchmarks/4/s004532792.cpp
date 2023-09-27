#include <iostream>
using namespace std;
int main(){
	int m,f,r,s;
	
	while(true){
		cin >> m >>f >>r;
		if(m==-1 && f==-1 && r==-1){
			break;
		}
		if(m==-1 || f== -1){
			cout << 'F' <<endl;
		}
		else { s = m+f; 
			if(s >= 80){
				cout <<'A' << endl;
			}
			else if(s>=65){
				cout <<'B' << endl;
			}
			else if(s>=50){
				cout <<'C' << endl;
			}
			else if(s>=30){
				if (r < 50){
						cout << 'D' << endl;
				}
				else {
					cout << 'C' << endl;
				}
			}
			else{
				cout <<'F' << endl;
			}
		}
	}


	return 0;
}