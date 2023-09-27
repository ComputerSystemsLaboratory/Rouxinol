#include <iostream>
#include <string>
#include <set>

using namespace std;

//string
//.resize(i)
//.substr(i)

//set
//.insert(s)
//.count(s)

int main(){
	int M;
	string S;
	cin >> M;
	for(int i = 0; i < M; i++){
		cin >> S;
		set<string> A;
		A.insert(S);
		for(int i = 0; i < S.size(); i++){
			string L = S;
			L.resize(i);
			string R;
			R = S.substr(i);
			string L2, R2;
			for(int i = L.size() - 1; i >= 0; i--) L2 += L[i];
			for(int i = R.size() - 1; i >= 0; i--) R2 += R[i];
			A.insert(L+R);
			A.insert(L2+R);
			A.insert(L+R2);
			A.insert(L2+R2);
			A.insert(R+L);
			A.insert(R+L2);
			A.insert(R2+L);
			A.insert(R2+L2);
		}
		cout << A.size() << endl;
	}
	return 0;
}