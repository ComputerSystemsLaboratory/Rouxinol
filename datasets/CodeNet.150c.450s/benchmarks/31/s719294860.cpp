#include<iostream>
#include<vector>
using namespace std;

int M(vector<int> A){
	int m = 0;
	int c = 0;
	int d = A[1] - A[0];
	while(1){
		for(int i = m + 1; i < A.size(); i++){
			c++;
			if(A[i] - A[m] < 0){
				m = i;
				break;
			}
			if(A[i] - A[m] > d){
				d = A[i] - A[m];
			}
		}
		if(c >= A.size() - 1) break;
	}
	return d;
}

int main(){
	int n;
	cin >> n;
	vector<int> A;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		A.push_back(a);
	}
	cout << M(A) << endl;
	return 0;
}