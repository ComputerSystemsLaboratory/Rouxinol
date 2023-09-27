#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <string>
#include <functional>
#include <algorithm>
using namespace std;

typedef long long ll;

#define rep(i,a) for(int i=0;i<(a);++i)
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << endl;

int parse(string str)
{
    int ret = 0;
    int tmp = 1;
    for(int j = 0; j < str.size();)  {
        if(str[j] >= '2' &&  str[j] <= '9') {
            if(tmp == 1) {
                tmp = str[j] - '0';
            } else {
                tmp = tmp * 10 + (str[j] - '0');
            }
            j++;
        } else {
            if(str[j] == 'm') {
                ret += tmp * 1000;
            } else if(str[j] == 'c') {
                ret += tmp * 100;
            } else if(str[j] == 'x') {
                ret += tmp * 10;
            } else {
                ret += tmp;
            }
            j++;
            tmp = 1;
        }
    }
    return ret;
}

string comp(int num)
{

    string ret = "";
    
    int tmp;
    tmp = num / 1000;

    if(tmp == 1) {
        ret = ret + "m";
    } else if(tmp >= 2) {
        ret = ret + string(1, '0' + tmp) + "m";
    }

    num = num % 1000;
    tmp = num / 100;

    if(tmp == 1) {
        ret = ret + "c";
    } else if(tmp >= 2) {
        ret = ret + string(1, '0' + tmp) + "c";
    }

    num = num % 100;
    tmp = num / 10;

    if(tmp == 1) {
        ret = ret + "x";
    } else if(tmp >= 2) {
        ret = ret + string(1, '0' + tmp) + "x";
    }

    num = num % 10;
    tmp = num;

    if(tmp == 1) {
        ret = ret + "i";
    } else if(tmp >= 2) {
        ret = ret + string(1, '0' + tmp) + "i";
    }

    return ret;
    
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        
        int ai, bi, sum;
        ai = parse(a); bi = parse(b);
        //cout << ai << " " << bi << endl;
        sum = ai + bi;
        
        //cout << sum << endl;
        
        cout << comp(sum) << endl;
    }
}