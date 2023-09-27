// 2014/07/29 Tazoe

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string W;
	cin >> W;

	for(int i=0; i<W.size(); i++){
		W[i] = tolower(W[i]);
	}

	int cnt = 0;

	while(true){
		string T;
		cin >> T;

		if(T=="END_OF_TEXT")
			break;

		for(int i=0; i<T.size(); i++){
			T[i] = tolower(T[i]);
		}

		if(T==W){
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}