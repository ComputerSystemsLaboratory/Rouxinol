#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int MCXI2D(string str){
    int d = 1;
    int sum = 0;
    int p = 0;
    while (p < str.size()) {
        if (isdigit(str[p])) {
            d = str[p] - '0';
        }else{
            if (str[p] == 'm') {
                sum += d * 1000;
            }else if (str[p] == 'c'){
                sum += d * 100;
            }else if (str[p] == 'x'){
                sum += d * 10;
            }else if (str[p] == 'i'){
                sum += d * 1;
            }
            d = 1;
        }
        p++;
    }
    return sum;
}

string D2MCXI(int a, int b){
    int sum = a + b;
    string ans = "";
    int m = sum / 1000;
    sum %= 1000;
    int c = sum / 100;
    sum %= 100;
    int x = sum / 10;
    sum %= 10;
    int i = sum;

    if (m != 0) {
        if (m == 1) {
            ans += "m";
        }else{
            ans += (m + '0');
            ans += "m";
        }
    }
    if (c != 0){
        if (c == 1){
            ans += "c";
        }else{
            ans += (c + '0');
            ans += "c";
        }
    }
    if (x != 0){
        if (x == 1){
            ans += "x";
        }else{
            ans += (x + '0');
            ans += "x";
        }
    }
    if (i != 0){
        if (i == 1){
            ans += "i";
        }else{
            ans += (i + '0');
            ans += "i";
        }
    }
    return ans;
}



int main()
{
    string str1, str2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str1 >> str2;
        cout << D2MCXI(MCXI2D(str1), MCXI2D(str2)) << endl;
    }

    return 0;
}