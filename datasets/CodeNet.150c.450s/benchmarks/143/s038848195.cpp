#include <bits/stdc++.h>
using namespace std;


int main() {
	int N;
	cin >> N;
	vector<int64_t>A(N);
	for(int i=0;i<N;i++){
		cin >> A.at(i);
	}
	int q;
	cin >> q;
	vector<int64_t>B(q);
	vector<int64_t>C(q);
	for(int i=0;i<q;i++){
		cin >> B.at(i);
		cin >> C.at(i);
	}
	int64_t sum = 0;
	for(int i=0;i<N;i++){
		sum+= A.at(i);
	}
	vector<int64_t>number(100000);
	for(int i=0;i<N;i++){
		number.at(A.at(i)-1)++;
	}
	for(int i=0;i<q;i++){
		int k = C.at(i)-B.at(i);
		sum += k*number.at(B.at(i)-1);
		cout << sum << endl;
		int s = number.at(B.at(i)-1);
		number.at(B.at(i)-1)=0;
		number.at(C.at(i)-1)+= s;

	}


}




