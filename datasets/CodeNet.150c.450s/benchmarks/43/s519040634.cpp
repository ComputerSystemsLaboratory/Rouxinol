#include<iostream>
using namespace std;

int main(){
	int n, a, b, a_score = 0, b_score = 0;
	while(true){
		cin >> n;
		if(n == 0)
			break;
		for(int i = 0; i < n; ++i){
			cin >> a >> b;
			if(a < b)
				b_score += a + b;
			else if(a > b)
				a_score += a + b;
			else{
				a_score += a;
				b_score += b;
			}		
		}
		cout << a_score << " " << b_score << endl;
		a_score = b_score = 0;
	}
	return 0;
}