#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int i,j;
    char type;
    int number;
    cin >> n;
    int cards[4] [13];
    for (i=0; i<4; i++) {
        for (j=0; j<13; j++) {
            cards [i] [j]=1;
        }
    }
    for(i=0; i<n; i++){
        cin >> type >> number;
        switch (type) {
            case 'S':
                cards[0] [number-1]=0;
                break;
            case 'H':
                cards[1] [number-1]=0;
                break;
            case 'C':
                cards[2] [number-1]=0;
                break;
            case 'D':
                cards[3] [number-1]=0;
            default:
                break;
        }
    }
    for (i=0; i<4; i++) {
        for (j=0; j<13; j++) {
            if (cards[i][j]!=0) {
                switch (i){
                    case 0 : cout << "S " << j+1 << endl;
                        break;
                    case 1 : cout << "H " << j+1 << endl;
                        break;
                    case 2 : cout << "C " << j+1 << endl;
                        break;
                    case 3 : cout << "D " << j+1 << endl;
                        break;
                    default:
                        break;
                }
            }
        }
    }
    
    return 0;
}