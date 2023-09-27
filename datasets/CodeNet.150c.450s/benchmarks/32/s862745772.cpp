#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	int n,nn;
	int nmax,nmin;
	vector<int> v(10000,0);
	vector<int> free;
	int point;
	int ss,s;

	while(1){
		cin >> n;
		cin >> nmin;
		cin >> nmax; 
		ss = 0;
		s = 0;
		nn = 0;

		if(n == 0 && nmax == 0 && nmin == 0){
			break;
		}

		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		
		for(int i = nmin - 1;i < nmax; i++){
			s = v[i] - v[i+1];
			if(i == nmin -1 || ss <= s){
				ss = s;
				nn = i+1;
			}
		}

		cout << nn <<endl;
	
	}
}