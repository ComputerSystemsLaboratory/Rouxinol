#include <iostream>
#include <cstring>
#include <set>
#include <algorithm>
using namespace std;
set<string> S;

void count_str(string str1, string str2){
    string rstr1 = str1;
    string rstr2 = str2;
    reverse(rstr1.begin(), rstr1.end());
    reverse(rstr2.begin(), rstr2.end());
    
    S.insert(str1+str2);
    S.insert(str1+rstr2);
    S.insert(rstr1+str2);
    S.insert(rstr1+rstr2);
    S.insert(str2+str1);
    S.insert(str2+rstr1);
    S.insert(rstr2+str1);
    S.insert(rstr2+rstr1);
}

int main()
{
    int m;
    string str, str1, str2;
    cin >> m;
    for (int k = 0; k < m; k++) {
        cin >> str;
        S.clear();
        for (int i = 1; i < str.size(); i++) {
            str1 = "";
            str2 = "";
            for (int j = 0; j < i; j++) {
                str1 += str[j];
            }
            for (int j = i; j < str.size(); j++) {
                str2 += str[j];
            }
            count_str(str1, str2);
        }
        cout << (unsigned int)S.size() << endl;
    }
    return 0;
}