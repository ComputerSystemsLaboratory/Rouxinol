#include<iostream>
#include<string>
using namespace std;
using UL = unsigned int;
using LL = long long;
using ULL = unsigned long long;
#define rep(i,n) for(UL i=0; i<n; i++)

string QL = "NESW";
UL to[4][6] = {
	{ 4, 0, 2, 3, 5, 1 },
	{ 2, 1, 5, 0, 4, 3 },
	{ 1, 5, 2, 3, 0, 4 },
	{ 3, 1, 0, 5, 4, 2 }
};

UL C[6];

int main(){
	rep(i, 6) cin >> C[i];
	string S; cin >> S;
	for (char c : S){
		UL tmp[6];
		UL q = QL.find(c);
		rep(i, 6) tmp[to[q][i]] = C[i];
		rep(i, 6)C[i] = tmp[i];
	}
	cout << C[0] << endl;
	return 0;
}
