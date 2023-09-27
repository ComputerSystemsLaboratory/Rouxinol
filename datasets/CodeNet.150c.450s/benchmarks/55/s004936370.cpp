#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int answer;
    
    while(true) {
        answer = 0;
        string str;
        getline(cin, str);
        if(str.length() == 1 && str[0] == '0')   break;
        for(int i = 0; i < str.length(); ++i) {
            answer += str[i] - '0';
        }
        cout << answer << endl;
    }
    
    return 0;
}

