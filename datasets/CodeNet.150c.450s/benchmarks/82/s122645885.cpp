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

        else if (ch == 'Z'){
            facetmp[1] = face[3];
            facetmp[2] = face[1];
            facetmp[3] = face[4];
            facetmp[4] = face[2];
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
    int num[6], q, f1, f2;
    string order = "";
    for (int i = 0; i < 6; i++){
        cin >> num[i];
        d1.face[i] = num[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> f1 >> f2;

        for (int j = 0; j <= 3; j++){
            for (int k = 0; k <= 3; k++){
                for (int n = 0; n <= 3; n++){
                    order.clear();
                    order.append(j,'E');
                    order.append(k,'S');
                    order.append(n,'Z');

                    for (int l = 0; l < 6; l++){
                        d1.face[l] = num[l];
                    }
                    for (int m = 0; m < order.size(); m++){
                        d1.move(order[m]);
                    }
                    if (d1.face[0] == f1 && d1.face[1] == f2){
                        cout << d1.face[2] << "\n";
                        j = 3;
                        k = 3;
                        n = 3;
                    }
                }

            }
        }
    }

    return 0;
}