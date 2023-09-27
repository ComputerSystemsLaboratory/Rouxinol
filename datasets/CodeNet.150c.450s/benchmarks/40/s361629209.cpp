#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <map>
#include <deque>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>

using namespace std;


struct Dice{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
};

int main() {
    

    Dice dice;
    cin >> dice.a >> dice.b >> dice.c >> dice.d >> dice.e >> dice.f;
    string s;
    cin >> s;
    for (int i=0;i<s.length();i++){
        if(s[i] == 'N'){
            int t = dice.a;
            dice.a = dice.b;
            dice.b = dice.f;
            dice.f = dice.e;
            dice.e = t;
        }else if(s[i] == 'S'){
            int t = dice.a;
            dice.a = dice.e;
            dice.e = dice.f;
            dice.f = dice.b;
            dice.b = t;
        }else if(s[i] == 'E') {
            int t = dice.a;
            dice.a = dice.d;
            dice.d = dice.f;
            dice.f = dice.c;
            dice.c = t;
        }else{
            int t = dice.a;
            dice.a = dice.c;
            dice.c = dice.f;
            dice.f = dice.d;
            dice.d = t;
        }
    }
    cout << dice.a << endl;



}
