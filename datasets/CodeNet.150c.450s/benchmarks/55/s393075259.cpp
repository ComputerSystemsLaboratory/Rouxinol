#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
    string str;
    
    vector<int> v;
    while (getline(cin, str)) {
        if (str[0] == '0') {
            break;
        }
        
        int sum = 0;
        for (int i = 0; i < str.size(); i++) {
            //sum += atoi(&str[i]);
            sum += str[i] - '0';
        }
        v.push_back(sum);
    }

    for (int j = 0; j < v.size(); j++) {
        cout << v[j] << endl;
    }

    return 0;
}