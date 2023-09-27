#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    int i, sum;
    vector<string> vec;
    vector<string>::iterator it;
    string str;

    while(1) {
        cin >> str;
        if(str[0] == '0') break;
        vec.push_back(str);
    }

    for(it=vec.begin(); it!=vec.end(); ++it) {
        sum = 0;
        for(i=0; i<(*it).length(); ++i) {
            sum += (*it)[i] - '0';
        }
        cout << sum << endl;
    }

    return 0;
}