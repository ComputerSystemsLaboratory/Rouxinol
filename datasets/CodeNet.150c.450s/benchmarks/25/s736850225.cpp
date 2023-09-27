#include<iostream>
using namespace std;
int main(){
	char ch;
	int a[100];
	for (int i = 0; i < 100; i++){
		a[i] = 0;
	}
	while (cin >> ch){
	
		if (isupper(ch)){
			ch = tolower(ch);
		}
		int num = ch - 'a';
		
		if (0 <= num && num <= 25)
		{
			a[num]++;

		}
	
	}
	for (int i = 0; i < 26; i++){
		char y = i + 'a';
		cout << y << ' ' << ':' << ' ';
		cout << a[i] << endl;
	}

	return 0;
}