#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void)
{
    string str;
    map<string, int> cnt;
    string freq;
    string maxlen;
    while(cin >> str) {
        int c = cnt[str]++;

        if(c > cnt[freq])
            freq = str;
        if(str.size() > maxlen.size())
            maxlen = str;
    }
    cout << freq << " " << maxlen << endl;

    return 0;
}