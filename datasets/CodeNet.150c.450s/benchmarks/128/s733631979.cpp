#include<iostream>
#include<iomanip>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<stack>
#include<functional>
#include<string>
#include<cstring>
#include <sstream>
using namespace std;
int main(void){
    string str;
    while(cin >> str){
        reverse(str.begin(),str.end());
        cout << str << endl;
    }
    return 0;
}