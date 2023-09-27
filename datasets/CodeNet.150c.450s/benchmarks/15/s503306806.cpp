#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int numS;
    cin >> numS;

    int *arrS = (int*) malloc(numS * sizeof(int));
    for (int i = 0; i < numS; i++) {
        cin >> arrS[i];
    }

    int numT;
    cin >> numT;
    int count = 0;
    for (int i = 0; i < numT; i++) {
        int current;
        cin >> current;
        for (int j = 0; j < numS; j++) {
            if (*(arrS + j) == current) {
                count++;
                break;
            }
        }
    }

    free(arrS);

    cout << count;
    cout << endl;

    return 0;
}

