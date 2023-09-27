#include <iostream>

using namespace std;

#define MAX 10000

/*****************************************
* these methods show the node idx in array
* as example i = 2
* parent = 1 in array A[1]
* left = 2
* right = 3
*****************************************/
int parent(int i) { return i / 2; }

int left(int i) { return 2 * i; }
int right(int i) { return 2 * i + 1; }

void print(int H, int A[]) {
    for (int i = 1; i <= H; i++) cout << A[i] << " ";
    cout << endl;
}


int main()
{
    int H, i, A[MAX+1];

    cin >> H;

        //upload data to array
    for (i = 1; i<= H; i++) cin >> A[i];
    //print(H, A);
    //cout << "**********************************" << endl;
    for (i = 1; i <= H; i++) {
        cout << "node " << i << ": key = " << A[i] << ", ";
        if (parent(i) >= 1) cout << "parent key = " << A[parent(i)] << ", ";
        if (left(i) <= H) cout << "left key = " << A[left(i)] << ", ";
        if (right(i) <= H) cout << "right key = " << A[right(i)] << ", ";
        cout << endl;
    }
    return 0;
}

