//                     بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//                   لآ اِلَهَ اِلّا اللّهُ مُحَمَّدٌ رَسُوُل اللّهِ

#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

const int MOD = 1000000007;
int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int n,a = 0, b = 0, c= 0, d = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		string x;
		cin >> x;
		if(x == "AC") a++;
		else if(x == "WA") b++;
		else if(x == "TLE") c++;
		else if(x == "RE") d++;
	}
	cout << "AC x " << a << endl;
	cout << "WA x " << b << endl;
	cout << "TLE x " << c << endl;
	cout << "RE x " << d << endl;
	
	return 0;
}