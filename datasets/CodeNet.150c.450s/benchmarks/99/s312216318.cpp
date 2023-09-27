//
//  1137.cpp
//  
//
//  Created by Minote Tomoki on 2015/06/04.
//
//

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int mcxi2num(string mcxi) {
    int a=1;
    int result=0;
    for(int i=0;i<mcxi.length();i++) {
        if(mcxi.at(i) >= '2' && mcxi.at(i) <= '9' ) {
            a = mcxi.at(i)-'0';
        }
        else if(mcxi.at(i) == 'm') {
            result += a * 1000;
            a=1;
        }
        else if(mcxi.at(i) == 'c') {
            result += a * 100;
            a=1;
        }
        else if(mcxi.at(i) == 'x') {
            result += a * 10;
            a=1;
        }
        else if(mcxi.at(i) == 'i') {
            result += a * 1;
        }
    }
    
    
    return result;
}

string num2mcxi(int num) {
    int m = num/1000;
    int c = num/100%10;
    int x = num/10%10;
    int i = num%10;
    
    string result{};
    
    
    if(m>=2) {
        result+=(char)(m+'0');
    }
    
    if(m>0) {
        result+="m";
    }
    
    if(c>=2) {
        result+=(char)(c+'0');
    }
    
    if(c>0) {
        result+="c";
    }
    
    if(x>=2) {
        result+=(char)(x+'0');
    }
    
    if(x>0) {
        result+="x";
    }
    
    if(i>=2) {
        result+=(char)(i+'0');
    }
    
    if(i>0) {
        result+="i";
    }
    
    return result;
}

int main(void) {
    int n;
    string s1,s2;
    
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> s1 >> s2;
        
        cout << num2mcxi(mcxi2num(s1)+mcxi2num(s2)) << endl;
    }
    
    return 0;
}