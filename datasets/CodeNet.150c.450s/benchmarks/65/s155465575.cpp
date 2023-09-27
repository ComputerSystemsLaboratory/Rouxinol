
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#include <stack>
#include <functional>
#include <set>
#include <map>
#include <deque>

#define GET_ARRAY_SIZE(a)   (sizeof(a)/sizeof(a[0]))

using namespace std;

struct Card{char suit; int value;};

void print_func(Card *array, int size){
    for (int j = 0; j < size; ++j) {
        cout << ( j ? " " : "" ) << array[j].suit << array[j].value;
    }
    cout << endl;
}

void bubble_sort(Card *array, int size){
    Card tmp;
    bool flag = true;
    while(flag) {
        flag = false;
        for (int i = size - 1; i > 0; --i) {
            if (array[i].value < array[i - 1].value) {
                tmp = array[i - 1];
                array[i - 1] = array[i];
                array[i] = tmp;
                flag = true;
            }
        }
    }
}

void selection_sort(Card* array, int size){
    int minj;
    Card tmp;
    bool flag;
    for (int i = 0; i < size; ++i) {
        minj = i;
        flag = false;
        for (int j = i; j < size; ++j) {
            if (array[j].value < array[minj].value) {
                minj = j;
                flag = true;
            }
        }

        if (flag) {
            tmp = array[i];
            array[i] = array[minj];
            array[minj] = tmp;
        }
    }
}

bool is_stable(Card *a1, Card *a2, int size){
    bool check = true;
    for (int i = 0; i < size; ++i) {
        if (a1[i].suit != a2[i].suit){
            check = false;
            break;
        }
    }
    return check;
}

int main(){
    int N;
    cin >> N;

    Card C1[N], C2[N];

    for (int i = 0; i < N; ++i) {
        cin >> C1[i].suit >> C1[i].value;
        C2[i] = C1[i];
    }

    bubble_sort(C1, GET_ARRAY_SIZE(C1));
    print_func(C1, GET_ARRAY_SIZE(C1));
    cout << "Stable" << endl;

    selection_sort(C2, GET_ARRAY_SIZE(C2));
    print_func(C2, GET_ARRAY_SIZE(C2));


    if(is_stable(C1, C2, N)){
        cout << "Stable" << endl;
    }else{
        cout << "Not stable" << endl;
    }

}