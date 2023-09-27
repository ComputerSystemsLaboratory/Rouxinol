#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <cctype>
#include <cstdio>
 
using namespace std;
 
string in, s;
int ct = 0;
 
char ToLower(char cX) { return tolower(cX); }
 
int main(){
    cin >> in;
    transform(in.begin(), in.end(), in.begin(), ToLower);
    while (true){
        cin >> s;
        if (s == "END_OF_TEXT") break;
        transform(s.begin(), s.end(), s.begin(), ToLower);
        if (s == in) ct++;
    }
    cout << ct << endl;
}