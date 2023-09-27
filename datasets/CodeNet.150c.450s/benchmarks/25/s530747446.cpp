#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;

int main()
{
	char ch;
	int num,count[26] = {0};
	while(scanf("%c",&ch) != EOF) {
		if(isupper(ch)) ch = tolower(ch);
		num = ch;
		if(num >= 'a' && num <= 'z') count[num - 'a']++;
		}
		
		for(int i = 'a';i <= 'z';i++){
			cout << char(i) << " : " << count[i - 'a'] << endl;
		}
	return 0;
}