#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main() {
	string source;
	string target;
	cin >> target;
	for (int i = 0; i < target.length(); i++) {
		target[i] = tolower(target[i]);
	}
	int sum = 0;
	while (cin>>source && source != "END_OF_TEXT") {
		for (int i = 0; i < source.length(); i++) {
			source[i] = tolower(source[i]);
		}
		if (source==target) {
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}

/*
int main() {
	string source;
	string target;
	cin >> target;
	int targetLen = target.length();
	int sum = 0;
	cin.ignore();
	//getline(cin,source);
	while (getline(cin,source)&&source!="END_OF_TEXT") {
		//search for words
		bool wordMissed = false;
		for (int i = 0; i < source.length()-targetLen+2; i++) {
			if (source[i] == ' ') {
				wordMissed = false;
				continue;
			}
			for (int j = 0; j < target.length()&&!wordMissed; j++) {
				if (tolower(source[i + j]) == tolower(target[j]) &&j==targetLen-1) {
					if (i+j== source.length() -1||source[i+j+1]==' ') {
						sum++;
					}
					
				}else if (tolower(source[i + j]) == tolower(target[j]) ) {
					continue;
				}
				else
				{
					wordMissed = true;
					break;
				}
				//if()

			}
			//getline(cin,source);
		}
		
		
	}

	cout << sum<<endl;

	return 0;
}
*/