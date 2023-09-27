#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int men[6];
    int men1;
    string cmd;
    
    for ( int i = 0; i < 6 ; i++){
        cin >> men[i];
    }
    cin >> cmd;
    
    for(int i = 0;cmd[i] != '\0';i++){
        switch (cmd[i]) {
            case 'E':
                men1   = men[0];
                men[0] = men[3];
                men[3] = men[5];
                men[5] = men[2];
                men[2] = men1;
                break;
                
            case 'W':
                men1   = men[0];
                men[0] = men[2];
                men[2] = men[5];
                men[5] = men[3];
                men[3] = men1;
                break;
                
            case 'N':
                men1   = men[0];
                men[0] = men[1];
                men[1] = men[5];
                men[5] = men[4];
                men[4] = men1;
                break;
                
            case 'S':
                men1   = men[0];
                men[0] = men[4];
                men[4] = men[5];
                men[5] = men[1];
                men[1] = men1;
                break;
            default:
                break;
        }
    }
    
    cout << men[0] << endl;
    
    return 0;
}

