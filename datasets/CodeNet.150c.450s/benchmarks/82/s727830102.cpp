#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int num[6], temp;
} dice_struct;
dice_struct dice;

void setting(int d[]) {
    for (int i = 0; i < 6; i++) {
        dice.num[i] = d[i];
    }
}

int right(int top, int front) {
    int zero = dice.num[0];
    int one = dice.num[1];
    int two = dice.num[2];
    int three = dice.num[3];
    int four = dice.num[4];
    int five = dice.num[5];


    if (top == zero) {
        if (front == one) {
            return two;
        } else if (front == two) {
            return four;
        } else if (front == four) {
            return three;
        } else if (front == three) {
            return one;
        }
    } else if (top == one) {
        if (front == two) {
            return zero;
        } else if (front == zero) {
            return three;
        } else if (front == three) {
            return five;
        } else if (front == five) {
            return two;
        }
    } else if (top == two) {
        if (front == zero) {
            return one;
        } else if (front == one) {
            return five;
        } else if (front == five) {
            return four;
        } else if (front == four) {
            return zero;
        }
    } else if (top == three) {
        if (front == zero) {
            return four;
        } else if (front == four) {
            return five;
        } else if (front == five) {
            return one;
        } else if (front == one) {
            return zero;
        }
    } else if (top == four) {
        if (front == zero) {
            return two;
        } else if (front == two) {
            return five;
        } else if (front == five) {
            return three;
        } else if (front == three) {
            return zero;
        }
    } else if (top == five) {
        if (front == one) {
            return three;
        } else if (front == three) {
            return four;
        } else if (front == four) {
            return two;
        } else if (front == two) {
            return one;
        }
    }
}

int main(int argc, char const *argv[]) {
    int number[6];
    for (int i = 0; i < 6; i++) {
        cin >> number[i];
    }
    setting(number);

    int q;
    cin >> q;

    int t, f, r;

    for (int i = 0; i < q; i++) {
        cin >> t >> f;
        r = right(t, f);
        cout << r << endl;
    }   
       
    return 0;
}

