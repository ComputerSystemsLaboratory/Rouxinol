#include <iostream>
using namespace std;
#include <cstdio>
#include <cmath>

class Dice{
public:
    int face[6], facetmp[6];

    Dice(void){
        for (int i = 0; i < 6; i++){
            face[i] = 0;
            facetmp[i] = 0;
        }
    }

    void move(char ch){
        for (int i = 0; i < 6; i++) {
            facetmp[i] = face[i];
        }

        if (ch == 'E') {
            facetmp[0] = face[3];
            facetmp[2] = face[0];
            facetmp[3] = face[5];
            facetmp[5] = face[2];
        }

        else if (ch == 'W') {
            facetmp[0] = face[2];
            facetmp[2] = face[5];
            facetmp[3] = face[0];
            facetmp[5] = face[3];
        }

        else if (ch == 'N') {
            facetmp[0] = face[1];
            facetmp[1] = face[5];
            facetmp[4] = face[0];
            facetmp[5] = face[4];
        }

        else if (ch == 'S') {
            facetmp[0] = face[4];
            facetmp[1] = face[0];
            facetmp[4] = face[5];
            facetmp[5] = face[1];
        }

        for (int i = 0; i < 6; i++){
            face[i] = facetmp[i];
        }

    }

    void print(){
        cout << face[0] << endl;
    }

};

int main() {
    Dice d1;
    int num;
    string order;
    for (int i = 0; i < 6; i++){
        cin >> num;
        d1.face[i] = num;
    }

    cin >> order;

    for (int i = 0; i < order.size(); i++){
        d1.move(order[i]);
    }

    d1.print();

    return 0;
}