#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    int i, j, d[7], d_next[7], num, top, front;

    cin >> d[1] >> d[2] >> d[3] >> d[4] >> d[5] >> d[6];
    cin >> num;

    for(i=0;i<num;i++){
        cin >> top >> front;
        if (top == d[1]){
            if(front == d[2]){
                cout << d[3] << endl;
            }else if(front == d[3]){
                cout << d[5] << endl;
            }else if(front == d[5]){
                cout << d[4] << endl;
            }else if(front == d[4]){
                cout << d[2] << endl;
            }
        }else if(top == d[2]){
            if(front == d[6]){
                cout << d[3] << endl;
            }else if(front == d[3]){
                cout << d[1] << endl;
            }else if(front == d[1]){
                cout << d[4] << endl;
            }else if(front == d[4]){
                cout << d[6] << endl;
            }
        }else if(top == d[3]){
            if(front == d[1]){
                cout << d[2] << endl;
            }else if(front == d[2]){
                cout << d[6] << endl;
            }else if(front == d[6]){
                cout << d[5] << endl;
            }else if(front == d[5]){
                cout << d[1] << endl;
            }
        }else if(top == d[4]){
            if(front == d[2]){
                cout << d[1] << endl;
            }else if(front == d[1]){
                cout << d[5] << endl;
            }else if(front == d[5]){
                cout << d[6] << endl;
            }else if(front == d[6]){
                cout << d[2] << endl;
            }
        }else if(top == d[5]){
            if(front == d[1]){
                cout << d[3] << endl;
            }else if(front == d[3]){
                cout << d[6] << endl;
            }else if(front == d[6]){
                cout << d[4] << endl;
            }else if(front == d[4]){
                cout << d[1] << endl;
            }
        }else if(top == d[6]){
            if(front == d[3]){
                cout << d[2] << endl;
            }else if(front == d[2]){
                cout << d[4] << endl;
            }else if(front == d[4]){
                cout << d[5] << endl;
            }else if(front == d[5]){
                cout << d[3] << endl;
            }
        }
    }

    return 0;
}
