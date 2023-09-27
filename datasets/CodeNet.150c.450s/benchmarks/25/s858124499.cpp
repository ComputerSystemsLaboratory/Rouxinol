#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int counter[26] = {};
    int num = 0;
    char d[26];
    char ch;
    while(cin >> ch){
        num = ch -'A';
        if(num > 26) num = ch-'a';
        counter[num]++;
    }

    for (int i = 0; i < 26; ++i)
    {
        int e = 'a' + i;
        d[i] = e;
    }

    for (int i = 0; i < 26; ++i)
    {
        cout << d[i] << " : " << counter[i] << endl;
    }
    return 0;
}