#include <iostream>
using namespace std;
typedef struct {
    int top;
    int S;
    int E;
    int W;
    int N;
    int bottom;
} dice;
void swap4(int *a, int *b, int *c, int *d) {
    int tmp = *a;
    *a = *b;
    *b = *c;
    *c = *d;
    *d = tmp;
}
void roll(dice *dp, char dir) {
    if (dir == 'E') {
        swap4(&(dp->top), &(dp->W), &(dp->bottom), &(dp->E));
    } else if (dir == 'N') {
        swap4(&(dp->top), &(dp->S), &(dp->bottom), &(dp->N));
    } else if (dir == 'S') {
        swap4(&(dp->top), &(dp->N), &(dp->bottom), &(dp->S));
    } else {
        swap4(&(dp->top), &(dp->E), &(dp->bottom), &(dp->W));
    }
}
int main(void){
    dice d;
    dice *dp = &d;
    cin >> dp->top >> dp->S >> dp->E >> dp->W >> dp->N >> dp->bottom;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        roll(dp, str[i]);
    }
    cout << dp->top << endl;
}