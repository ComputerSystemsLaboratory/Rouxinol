#include <iostream>
#include <cstring>

using namespace std;

int main() {
	
	char sentence;
	int count[26];
	int index, val;
	//cout << (int)'a' << " " << (int)'b' << " " <<(int)'z' <<" "<< (int)'A' <<" "<< (int)'B' <<" "<< (int)'Z' << endl;
	//cout << (char)65 << endl;
	//a->97 z->122
	//A->65 Z->90

	/*

	cin >> sentence;

	//cout << "len = " << strlen(sentence) << endl;

	//????????????????????????
	for (int i = 0; i < 26; i++) {
		count[i] = 0;
	}
		
	for (int i = 0; i < strlen(sentence); i++) {

		//65~90 97~122?????¨???????????????
		val = (int)sentence[i];
		//??§???????????¨???
		if (val >= 65 && val <= 90) {
			index = val - (int)'A';
			count[index]++;
		}
		//?°????????????¨???
		else if (val >= 97 && val <= 122) {
			index = val - (int)'a';
			count[index]++;
		}

		cout << "char=" << sentence[i] << " index=" << index << " count=" << count[index] << endl;

	}

	//??¨???
	for (int i = 0; i < 26; i++) {
	cout << (char)(i + 97) << " : " << count[i] << endl;
	}

	*/

	//????????????????????????
	for (int i = 0; i < 26; i++) {
		count[i] = 0;
	}

	while (cin >> sentence) {

			//65~90 97~122?????¨???????????????
			val = (int)sentence;
			//??§???????????¨???
			if (val >= 65 && val <= 90) {
				index = val - (int)'A';
				count[index]++;
			}
			//?°????????????¨???
			else if (val >= 97 && val <= 122) {
				index = val - (int)'a';
				count[index]++;
			}
			//????????\????????¨???????????????????????????
			/*
			else {
				break;
			}
			*/

			//cout << "char=" << sentence << " index=" << index << " count=" << count[index] << endl;

	}

	//??¨???
	for (int i = 0; i < 26; i++) {
		cout << (char)(i + 97) << " : " << count[i] << endl;
	}

	return 0;
}