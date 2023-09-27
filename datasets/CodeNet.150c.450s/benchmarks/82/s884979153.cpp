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
    
    int getFrontNumber(void) {
        return num_s;
    }
    
    int getRightNumber(void) {
        return num_e;
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
    
    void spinRight() {
        int tmp;
        tmp = num_s;
        num_s = num_e;
        num_e = num_n;
        num_n = num_w;
        num_w = tmp;
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
    int cnt;
    string str;
    getline(cin, str);
    dice x(str);
    //    dice x("1 2 4 8 16 32");

    int numOfQ;
    cin >> numOfQ;
    
    int front, upper;
    
    for(int i=0; i<numOfQ; i++) {
        cin >> upper >> front;
        
//        //test display
//        x.printDevelopment();
        
        
        //?????¢??????????????°??????????????§??¨??????????????¢?????????
        cnt = 0;
        while(x.getUpperNumber() != upper) {
            if(cnt<3) { //cnt=0,1,2??§3?????¢
                x.rollToN();
                cnt++;
            } else if(cnt==3) {
                x.spinRight();
                cnt++;
            } else if(cnt<7) { //4,5,6??§3?????¢
                x.rollToN();
                cnt++;
            } else {
                cout << "ERROR!! : UPPER is Not Found" << endl;
                return 9;
            }
        }
        
//        //test display
//        x.printDevelopment();
        
        
        //?????¢??????????????°??????????????§??´??¢???????????¢
        cnt = 0;
        while(x.getFrontNumber() != front) {
            if(cnt<3) { //cnt=0,1,2??§3?????¢
                x.spinRight();
                cnt++;
            } else {
                cout << "ERROR!! : FRONT is Not Found" << endl;
                return 9;
            }
        }
        
        
//        //test display
//        x.printDevelopment();
        
        
        cout << x.getRightNumber() << endl;
    }
    
    return 0;
    
}