#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
	string bottun[10] = { "0", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
	queue<char> str;
	int n, i;
	cin >> n;
	while( n-- > 0 ){
		char s[1025];
		cin >> s;
		for( i = 0; s[i] != '\0'; i++ ){
			str.push(s[i]);
		}
		int t = 0, num = 0;
		while( !str.empty() ){
			if( str.front() == '0' && num != 0 ){
				cout << bottun[num][(t-1)%bottun[num].length()];
				t = 0;
			}
			num = (int)(str.front() - '0');
			str.pop();
			if( num != 0 ) t++;
		}
		cout << endl;
	}
}