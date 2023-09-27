#include <iostream>
#include <string>
using namespace std;

string shuffle(string str,int num){
	string newStr(str.length(),'a');
	for(int i = 0; i < str.length() ; i++){
		newStr[i] = str[ ( i + num) % str.length() ];
	}
	return newStr;
}

int main()
{
	string str;
	int shuffleCount;
	cin >> str;
	while(str !="-"){
		cin >> shuffleCount;
		for(int i = 0; i < shuffleCount; i++){
			int repNum;
			cin >> repNum;
			str = shuffle(str,repNum);
		}
		cout<< str <<endl;
		cin >> str;
	}
	return 0;
}