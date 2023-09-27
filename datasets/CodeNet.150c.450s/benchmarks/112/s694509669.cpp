// 2011/09/26 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int n;
		cin >> n;
		if(n==0)
			break;

		char A[26];
		for(int i=0; i<26; i++)
			A[i] = (char)('A'+i);
		char a[26];
		for(int i=0; i<26; i++)
			a[i] = (char)('a'+i);
		char N[10];
		for(int i=0; i<10; i++)
			N[i] = (char)('0'+i);

		for(int i=0; i<n; i++){
			char bef, aft;
			cin >> bef >> aft;
			if(bef>='A'&&bef<='Z')
				A[bef-'A'] = aft;
			else if(bef>='a'&&bef<='z')
				a[bef-'a'] = aft;
			else if(bef>='0'&&bef<='9')
				N[bef-'0'] = aft;
		}

		int m;
		cin >> m;

		for(int i=0; i<m; i++){
			char c;
			cin >> c;
			if(c>='A'&&c<='Z')
				cout << A[c-'A'];
			else if(c>='a'&&c<='z')
				cout << a[c-'a'];
			else if(c>='0'&&c<='9')
				cout << N[c-'0'];
		}

		cout << endl;
	}

	return 0;
}