#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){

	 array<int, 3> temp;
	 int N;

	 cin >> N;
	 
	 for (int i = 0; i < N; ++i) {
		 for (auto& a : temp) {
			 cin >> a;
		 }
		 sort(temp.begin(), temp.end());

		 if (temp[0] * temp[0] + temp[1] * temp[1] == temp[2] * temp[2]) {
			 cout << "YES" << endl;
		 }
		 else {
			 cout << "NO" << endl;
		 }
	 }
	return 0;
}