#include <iostream>
#include<cctype>
using namespace std;
int main(){
	char mozi;
	int cou[30] = {},i=0;
	while (cin >> mozi){
		if (islower(mozi)){ cou[mozi - 'a']++; }
		if (isupper(mozi)){ cou[mozi - 'A']++; }
		i++;
	}
	for (i = 0; i < 26; i++){
		char last = 0;
		last = 'a' + i;
		cout << last << " : " << cou[i] << endl;
	}
}