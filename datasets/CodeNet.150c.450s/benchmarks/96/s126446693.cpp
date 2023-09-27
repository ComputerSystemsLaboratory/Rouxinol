#include<iostream>
#include<string>

using namespace std;

string s[10];

int n;

string decode(string str) {
    int pbt = 0;
    int cnt = 0;
    string res = "";
    for (char c : str) {
        int bt = c - '0';
        if (pbt != 0 && bt == 0) {
            res += s[pbt][(cnt - 1) % s[pbt].size()];
            pbt = 0;
            cnt = 0;
        } else if (bt != 0) {
            pbt = bt;
            cnt++;
        }
   }

   return res;
}

int main() {
    s[1] = ".,!? ";
    s[2] = "abc";
    s[3] = "def";
    s[4] = "ghi";
    s[5] = "jkl";
    s[6] = "mno";
    s[7] = "pqrs";
    s[8] = "tuv";
    s[9] = "wxyz";

    cin >> n;
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        cout << decode(str) << endl;
    }
}