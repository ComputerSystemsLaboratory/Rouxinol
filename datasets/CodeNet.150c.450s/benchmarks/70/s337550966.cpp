#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,d;
	while(true){
		cin >> m >> d;
		if(m == 0)break;
		int M = 1,D = 1;
		for(int i = 0; i < 366; i++){
			if(M == m && D == d){
				if(i % 7 == 0)cout << "Thursday" << endl;
				if(i % 7 == 1)cout << "Friday" << endl;
				if(i % 7 == 2)cout << "Saturday" << endl;
				if(i % 7 == 3)cout << "Sunday" << endl;
				if(i % 7 == 4)cout << "Monday" << endl;
				if(i % 7 == 5)cout << "Tuesday" << endl;
				if(i % 7 == 6)cout << "Wednesday" << endl;
			}
			D++;
			if((M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12) && (D == 32)){
				M++;
				D = 1;
			}
			if((M == 4 || M == 6 || M == 9 || M == 11) && (D == 31)){
				M++;
				D = 1;
			}
			if(M == 2 && D == 30){
				M++;
				D = 1;
			}
		}
	}
	return 0;
}
