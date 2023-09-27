#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <vector>
#include <sstream>
#include <string>
#include <cstdio>
#include <array>

using namespace std;

class dice {
    int num_up;
    int num_s;
    int num_w;
    int num_n;
    int num_e;
    int num_bot;
    
public:
    dice()
    {
        num_up = num_s = num_w = num_n = num_e = num_bot = 0;
    }
    
    dice(int num1, int num2, int num3, int num4, int num5, int num6)
    : num_up( num1 )
    , num_s( num2 )
    , num_e( num3 )
    , num_w( num4 )
    , num_n( num5)
    , num_bot( num6 )
    {
    }
    
    dice(string str)
    {
        stringstream ss(str);
        ss >> num_up >> num_s >> num_e >> num_w >> num_n >> num_bot;
    }
    
    int getUpperNumber(void) {
        return num_up;
    }
    
    void printAllNumber(void) {
            cout << num_up << " " << num_s << " " << num_e << " " << num_w << " " << num_n << " " << num_bot << endl;
    }
    
    void printDevelopment(void) {
        cout << "     ---\n";
        cout << "    |" << setw(3) << num_up << "|\n";
        cout << " --- --- --- ---\n";
        cout << "|" << setw(3) << num_w << "|" << setw(3) << num_s << "|" << setw(3) << num_e << "|" << setw(3) << num_n << "|\n";
        cout << " --- --- --- ---\n";
        cout << "    |" << setw(3) << num_bot << "|\n";
        cout << "     ---\n";
        //     ---
        //    |100|
        // --- --- --- ---
        //|xx3|  x|xxx|xxx|
        // --- --- --- ---
        //    |xxx|
        //     ---
    }
    
    void rollToN() {
        int tmp;
        tmp = num_bot;
        num_bot = num_n;
        num_n = num_up;
        num_up = num_s;
        num_s = tmp;
    }
    
    void rollToS() {
        int tmp;
        tmp = num_bot;
        num_bot = num_s;
        num_s = num_up;
        num_up = num_n;
        num_n = tmp;
    }
    
    void rollToE() {
        int tmp;
        tmp = num_bot;
        num_bot = num_e;
        num_e = num_up;
        num_up = num_w;
        num_w = tmp;
    }
    
    void rollToW() {
        int tmp;
        tmp = num_bot;
        num_bot = num_w;
        num_w = num_up;
        num_up = num_e;
        num_e = tmp;
    }
    
    void rollCommandWithChar(char c) {
        switch (c) {
            case 'E':
                rollToE();
                break;
                
            case 'N':
                rollToN();
                break;
                
            case 'S':
                rollToS();
                break;
                
            case 'W':
                rollToW();
                break;
                
            default:
                break;
        }
    }
};

int main(void) {
    string str;
    getline(cin, str);
    dice x(str);
//    dice x("1 2 4 8 16 32");

    getline(cin, str);
    for(char c : str) {
        x.rollCommandWithChar(c);
//        x.printDevelopment();
//        x.printAllNumber();
    }

    cout << x.getUpperNumber() << endl;


    return 0;
    
}