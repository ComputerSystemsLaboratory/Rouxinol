#include<algorithm>
#include<cmath>
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
const double PI = acos(-1);  // PI = 3.141593...

struct Dice {
    int up, front, right, left, back, down;
    Dice(int _up, int _front, int _right, int _left, int _back, int _down) 
    :up(_up), front(_front), right(_right), left(_left), back(_back), down(_down) 
    {}
    void east() {
        int tmp = this->up;
        this->up = this->left;
        this->left = this->down;
        this->down = this->right;
        this->right = tmp;
    }
    void west() {
        int tmp = this->up;
        this->up = this->right;
        this->right = this->down;
        this->down = this->left;
        this->left = tmp;
    }
    void south() {
        int tmp = this->up;
        this->up = this->back;
        this->back = this->down;
        this->down = this->front;
        this->front = tmp;
    }
    void north() {
        int tmp = this->up;
        this->up = this->front;
        this->front = this->down;
        this->down = this->back;
        this->back = tmp;
    }
    void toRight() {
        int tmp = this->front;
        this->front = this->left;
        this->left = this->back;
        this->back = this->right;
        this->right = tmp;
    }
    void print() {
        printf("up: %d, down: %d, front: %d, back: %d, left: %d, right: %d\n"
        , this->up, this->down, this->front, this->back, this->left, this->right);
    }
};

int main() {
    int up, front, right, left, back, down;
    int q, q1, q2;
    cin >> up >> front >> right >> left >> back >> down;
    Dice dice(up, front, right, left, back, down);
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> q1 >> q2;
        if(dice.left == q1 || dice.right == q1) dice.toRight();
        while(dice.up != q1) dice.south();
        while(dice.front != q2) dice.toRight();
        cout << dice.right << endl;
    }
    return 0;
}
