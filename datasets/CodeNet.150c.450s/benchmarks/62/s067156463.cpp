
#include<iostream>
#include<algorithm>

using namespace std;

int main(){

	int s[3];

	cin >> s[0] >> s[1] >> s[2];

	sort(s,s+3);

	cout << s[0] << " " << s[1] << " " << s[2] << endl;

	return 0;

}