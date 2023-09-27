#include <iostream>
using namespace std;

int main(){
	int m, f, r;
	int sum;
	char rank[1];
	
	for(;;){
		cin >> m >> f >> r;
		if(m == -1 && f == -1 && r == -1) break;
		 
		sum = m + f;
		if(sum >= 80){
			rank[0] = 'A';
		}else if(sum >= 65){
			rank[0] = 'B';
		}else if(sum >= 50){
			rank[0] = 'C';
		}else if(sum >= 30){
			if(r >= 50){
				rank[0] = 'C';
			}else {
				rank[0] = 'D';
			}
		}else {
			rank[0] = 'F';
		}
		if(m == -1 || f == -1) rank[0] = 'F';	
		cout << rank[0] << endl;
	}
	
	return 0;
}