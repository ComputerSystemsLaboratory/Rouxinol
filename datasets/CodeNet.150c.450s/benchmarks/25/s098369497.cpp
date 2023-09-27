#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
int main() {
	 int a[26]={},n;
	 string S;
	 char b[26];
	 for (int i = 0; i < 26; i++) {
		 b[i] = 'a' + i;
	 }
	 while (cin >> S) {
		 for (int i = 0; i < S.size(); i++) {
			 if (S[i] >= 'a'&&S[i] <= 'z') {
				 n = S[i] - 'a';
				 a[n]++;
			 }
			 else if (S[i] >= 'A'&&S[i] <= 'Z') {
				 n = S[i] - 'A';
				 a[n]++;
			 }
		 }
	 }
	 for (int i = 0; i < 26; i++) {
		 cout << b[i] << " " << ':' << " " << a[i] << endl;
	 }
}