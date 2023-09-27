#include<iostream>
#include<string>
#include<stdio.h>
#include<cctype>
#include<algorithm>
#include<climits>
#include<cmath>
#include<map>
#include<vector>
#define INF INT_MAX
using namespace std;

int N;
string S;
int ans[4];

int main(){
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> S;
		if (S == "AC"){
			ans[0]++;
		}
		else if (S == "WA"){
			ans[1]++;
		}
		else if (S == "TLE"){
			ans[2]++;
		}
		else{
			ans[3]++;
		}
	}
	cout << "AC x " << ans[0] << endl;
	cout << "WA x " << ans[1] << endl;
	cout << "TLE x " << ans[2] << endl;
	cout << "RE x " << ans[3] << endl;
	return 0;
}