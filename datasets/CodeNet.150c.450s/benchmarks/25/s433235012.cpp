#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
 
using namespace std;
 
char c, t;
int a[26] = {0};
 
int main(){
    while (cin >> c){
        if (isalpha(c)) {
            if (isupper(c)) c = tolower(c);
            a[c - 'a']++;
        }
    }
    for (int i = 'a'; i <= 'z'; i++) cout << static_cast<char>(i) << " : " << a[i - 'a'] << endl;
    }