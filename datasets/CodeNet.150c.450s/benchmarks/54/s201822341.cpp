#include <iostream>
#include <string>  

using std::cout;
using std::endl;
using std::cin;
using std::string;

string strUpp(string S) {
	// ??\????????§??????????????????
	for (size_t i = 0; i < S.size(); i++)
	{
		S[i] = toupper(S[i]);
	}
	return S;
}


int main() {
	string W;
	string T;
	int sum = 0;
	cin >> W;
	W = strUpp(W);
	while (1)
	{
		cin >> T;
		// ???????????¶
		if (T == "END_OF_TEXT")	break;
		T = strUpp(T);

		// ????´¢
		if (W == T) sum++;
	}
	cout << sum << endl;
	return 0;
}