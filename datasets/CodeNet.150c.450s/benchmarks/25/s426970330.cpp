#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
int main() {
    char S;
    int count[26] = {};
    while(cin >> S){
        S = tolower(S);
        int num = S - 'a';
        count[num]++;
    }
    for(int i = 0; i < 26; ++i){
        cout << (char)('a' + i) << " : " << count[i] << endl; 
    }
	return 0;
}