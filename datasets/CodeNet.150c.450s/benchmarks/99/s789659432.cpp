#include<iostream>
#include<string>

using namespace std;

int frommcxi(string mcxi) {
    
    int d = 1;
    int n = 0;
    char pre;
    for (int i = mcxi.size() - 1; i >= 0; --i) {
        char c = mcxi[i];
        switch(mcxi[i]){
            case 'm': d = 1000;
            break;
            case 'c': d = 100;
            break;
            case 'x': d = 10;
            break;
            case 'i': d = 1;
            break;
        }
        if (c == 'm' || c == 'c' || c == 'x' || c == 'i') {
            if (i == 0) n += d;
            else {
                int num = mcxi[i - 1] - '0';
                if (num <= 9 && num >= 2) n += d * num;
                else n += d;
            }
        }
        pre = mcxi[i];
    }
    return n;
}

string tomcxi(int n) {
    int m = n / 1000;
    n -= m * 1000;
    int c = n / 100;
    n -= c * 100;
    int x = n / 10;
    int i = n - x * 10;

    string mcxi = ""; 
    if (m != 0) mcxi += (m != 1 ? to_string(m) : "") + "m";
    if (c != 0) mcxi += (c != 1 ? to_string(c) : "") + "c";
    if (x != 0) mcxi += (x != 1 ? to_string(x) : "") + "x";
    if (i != 0) mcxi += (i != 1 ? to_string(i) : "") + "i";
    return mcxi;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string mcxi1;
        string mcxi2;
        cin >> mcxi1 >> mcxi2;
        //cout << mcxi1 << " -> "<< frommcxi(mcxi1) <<endl;
        cout << tomcxi(frommcxi(mcxi1) + frommcxi(mcxi2)) << endl;
    }
}