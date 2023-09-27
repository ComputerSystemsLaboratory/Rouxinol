// 2014/07/29 Tazoe

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int t = 0;
	int h = 0;

	for(int i=0; i<n; i++){
		string s1, s2;
		cin >> s1 >> s2;

		if(s1>s2){
			t += 3;
		}
		else if(s1<s2){
			h += 3;
		}
		else{
			t += 1;
			h += 1;
		}
	}

	cout << t << ' ' << h << endl;

	return 0;
}