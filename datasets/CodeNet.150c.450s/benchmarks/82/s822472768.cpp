#include <iostream>
#include <cstdlib>
using namespace std;
typedef struct {
    int nums[6];
    int *top, *bottom, *forward, *back, *left, *right;
} dice;
void init_dice(dice *d) {
    d->top = d->nums;
    d->forward = d->top + 1;
    d->right = d->forward + 1;
    d->left = d->right + 1;
    d->back = d->left + 1;
    d->bottom = d->back + 1;
}
void rotate_horizontal(dice *d) {
    int *tmp = d->forward;
    d->forward = d->right;
    d->right = d->back;
    d->back = d->left;
    d->left = tmp;
}
void rotate_vertical(dice *d) {
    int *tmp = d->top;
    d->top = d->forward;
    d->forward = d->bottom;
    d->bottom = d->back;
    d->back = tmp;
}
void set_top(dice *d, int top) {
    if (*(d->top) == top) {
        return;
    } else if (*(d->bottom) == top) {
        rotate_vertical(d);
        rotate_vertical(d);
    } else {
        while (*(d->forward) != top) {
            rotate_horizontal(d);
        }
        rotate_vertical(d);
    }
}
void set_forward(dice *d, int forward) {
    while (*(d->forward) != forward) {
        rotate_horizontal(d);
    }
}
int main(void){
    dice *d = (dice *)malloc(sizeof(dice));
    for (int i = 0; i < 6; i++) {
        cin >> d->nums[i];
    }
    init_dice(d);
    int loop;
    cin >> loop;
    for (int i = 0; i < loop; i++) {
        int top, forward;
        cin >> top >> forward;
        set_top(d, top);
        set_forward(d, forward);
        cout << *(d->right) << endl;
    }
}