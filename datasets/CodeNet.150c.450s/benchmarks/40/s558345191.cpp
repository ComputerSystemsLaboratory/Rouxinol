#include <iostream>
using namespace std;
int main(void){
    int sur1, sur2, sur3, sur4, sur5, sur6, sur_pro;
    char dir;
    cin >> sur1 >> sur2 >> sur3 >> sur4 >> sur5 >> sur6;
    
    
    while(cin >> dir){
        if(dir == 'N'){
            sur_pro = sur1;
            sur1 = sur2;
            sur2 = sur6;
            sur6 = sur5;
            sur5 = sur_pro;
        }
        else if(dir == 'S'){
            sur_pro = sur1;
            sur1 = sur5;
            sur5 = sur6;
            sur6 = sur2;
            sur2 = sur_pro;
        }
        else if(dir == 'W'){
            sur_pro = sur1;
            sur1 = sur3;
            sur3 = sur6;
            sur6 = sur4;
            sur4 = sur_pro;
        }
        else if(dir == 'E'){
            sur_pro = sur1;
            sur1 = sur4;
            sur4 = sur6;
            sur6 = sur3;
            sur3 = sur_pro;
        }
        else break;
    }
    cout << sur1 << endl;
    return 0;
}

