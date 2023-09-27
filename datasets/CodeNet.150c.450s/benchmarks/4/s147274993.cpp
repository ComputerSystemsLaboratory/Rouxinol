#include <iostream>
using namespace std;

int main(void) {
    int m = 0;
    int f = 0;
    int r = 0;
    
    while(cin >> m >> f >> r){
        
        // End of Data
        if(m == -1 && f == -1 && r == -1)
            break;

        int total = m + f;
        
        if(m == -1 || f == -1){
            cout << "F\n";
        }else if(total >= 80){
            cout << "A\n";
        }else if(total >= 65 && total < 80){
            cout << "B\n";
        }else if(total >= 50 && total < 65){
            cout << "C\n";
        }else if(total >= 30 && total < 50 && r >= 50){
            cout << "C\n";
        }else if(total >= 30 && total < 50){
            cout << "D\n";
        }else if(total < 30){
            cout << "F\n";
        }
        
        // cout << m_point << " " << f_point << " " << r_point << "\n";
    }
    
    return 0;
}

