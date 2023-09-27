#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main(void) {
    int n;
    while (cin >> n) {
        if (n == 0) {
            break; 
        }
        int times = 0;
        bool status = 0;
        bool left = 0;
        bool right = 0;
        for (int i = 0; i < n; i++) {
            string act;
            cin >> act;
            if (act == "lu") {
                left = 1; 
            } else if (act == "ru") {
                right = 1; 
            } else if (act == "ld") {
                left = 0; 
            } else if (act == "rd") {
                right = 0; 
            }
            if (left == 1 && right == 1 && status == 0) {
                times++; 
                status = 1;
            } else if (left == 0 && right == 0 && status == 1) {
                times++; 
                status = 0;
            }
        }
        cout << times << endl;
    }
    return 0;
}