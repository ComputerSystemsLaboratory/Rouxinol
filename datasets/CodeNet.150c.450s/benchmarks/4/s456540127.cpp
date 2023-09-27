#include <iostream>

using namespace std;

int main() {
    // input
    int m, f, r;
    int scores[50];
    int idx_scores = 0;
    do {
        cin >> m >> f >> r;

        // value check
        if( m > 50 || f > 50 || r > 100 ) {
            cout << "data err!";
        }

        // A B C D E F
        // 0 1 2 3 4 5
        if( m == -1 || f == -1 ) {
            scores[idx_scores] = 5;
        } else if( m + f >= 80 ) {
            scores[idx_scores] = 0;
        } else if( m + f >= 65 && m + f < 80 ) {
            scores[idx_scores] = 1;
        } else if( m + f >= 50 && m + f < 65 ) {
            scores[idx_scores] = 2;
        } else if( m + f >= 30 && m + f < 50  ) {
            if(r >= 50) {
                scores[idx_scores] = 2;
            } else {
                scores[idx_scores] = 3;
            }
        } else if( m + f < 30 ) {
            scores[idx_scores] = 5;
        }

        idx_scores += 1;
    } while( !(m == -1 && f == -1 && r == -1) );

    // output
    // output 1line/person
    for( int i=0; i<idx_scores-1; i++ ) {
        switch( scores[i] ) {
            case 0:
                cout << "A" << endl;
                break;
            case 1:
                cout << "B" << endl;
                break;
            case 2:
                cout << "C" << endl;
                break;
            case 3:
                cout << "D" << endl;
                break;
            case 4:
                cout << "E" << endl;
                break;
            case 5:
                cout << "F" << endl;
                break;
            //default:
                // nothing
        }
    }
}
