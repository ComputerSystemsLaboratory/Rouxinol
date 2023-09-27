// 2014/07/25 Tazoe

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int cnt[26] = {0};

	while(true){
		char c;
		cin >> c;

		if(cin.eof())
			break;

		if(islower(c)){
			cnt[c-'a']++;
		}
		else if(isupper(c)){
			cnt[c-'A']++;
		}
	}

	for(int i=0; i<26; i++){
		cout << (char)(i+'a') << " : " << cnt[i] << endl;
	}

	return 0;
}