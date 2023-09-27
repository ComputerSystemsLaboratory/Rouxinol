#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int hill[10];
    int i, j, max=0;
    int key;

    for (i = 0; i < 10; i++) {
        cin >> hill[i];
    }

    // insert sort
    for (i = 0; i < 10; i++) {
        j = i;
        while((j > 0) && hill[j-1] > hill[j]){
            swap(&hill[j-1], &hill[j]);
            j--;
        }
    }

    for (i = 9; i > 6; i--) {
        // printf("%d\n", hill[i]);
        cout << hill[i] << endl;
    }
    return 0;
}