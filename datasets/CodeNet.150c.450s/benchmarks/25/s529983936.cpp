#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main() {
	string temp;
	int n[26] = {0};
	char a[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	vector<string> vStr;
	while (getline(cin, temp) && !temp.empty()) {
		vStr.push_back(temp);
	}

	for (string s : vStr) {
		for (char& c : s) {
			c = tolower(c);
			switch (c) {
				case 'a':
					n[0]++; break;
				case 'b':
					n[1]++; break;
				case 'c':
					n[2]++; break;
				case 'd':
					n[3]++; break;
				case 'e':
					n[4]++; break;
				case 'f':
					n[5]++; break;
				case 'g':
					n[6]++; break;
				case 'h':
					n[7]++; break;
				case 'i':
					n[8]++; break;
				case 'j':
					n[9]++; break;
				case 'k':
					n[10]++; break;
				case 'l':
					n[11]++; break;
				case 'm':
					n[12]++; break;
				case 'n':
					n[13]++; break;
				case 'o':
					n[14]++; break;
				case 'p':
					n[15]++; break;
				case 'q':
					n[16]++; break;
				case 'r':
					n[17]++; break;
				case 's':
					n[18]++; break;
				case 't':
					n[19]++; break;
				case 'u':
					n[20]++; break;
				case 'v':
					n[21]++; break;
				case 'w':
					n[22]++; break;
				case 'x':
					n[23]++; break;
				case 'y':
					n[24]++; break;
				case 'z':
					n[25]++; break;
				default:
					break;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << a[i] << " : " << n[i] << endl;
	}
	return 0;
}