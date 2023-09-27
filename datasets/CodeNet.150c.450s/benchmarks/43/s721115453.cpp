#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){


	while(1){
		int n;
		cin >> n;
		if(n == 0)
			break;
		vector<int> A,B;
		for(int i = 0; i < n; i++){
			int a,b;
			cin >> a >> b;
			A.push_back(a);
			B.push_back(b);
		}

		int a_score = 0;
		int b_score = 0;
		for(int i = 0; i < A.size(); i++){
			if(A[i] > B[i]){
				a_score += A[i] + B[i];
			}
			else if(A[i] < B[i]){
				b_score += A[i] + B[i];
			}
			else{
				a_score += A[i];
				b_score += B[i];
			}
		}
		cout << a_score << " " << b_score << endl;
	}


	return 0;
}