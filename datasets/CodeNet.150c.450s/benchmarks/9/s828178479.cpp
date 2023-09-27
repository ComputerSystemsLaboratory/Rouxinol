#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	string ch,chl,chr;
    int count,shuffle;
    cin >> ch;
    while(ch != "-"){
    	cin >> count;
        for(int i = 0; i < count ; i++){
            cin >> shuffle;
            chr = ch.substr(0,shuffle);
            chl = ch.substr(shuffle,ch.length()-shuffle);
            ch = chl + chr;;
        }
        cout << ch << endl;
        cin >> ch;
    }
	return 0;
}