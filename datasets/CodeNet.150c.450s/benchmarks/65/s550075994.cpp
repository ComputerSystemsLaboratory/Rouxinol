#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<iomanip>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

struct Card{
    char suit, value;
};

void bubble(struct Card A[], int n){
    rep(i, n){
        for(int j = n - 1; j >= 0; j--){
            if(A[j].value < A[j - 1].value){
                Card g = A[j];
                A[j] = A[j - 1];
                A[j - 1] = g;
            }
        }
    }
}

void selection(struct Card A[], int n){
    int minj;
    rep(i, n){
        minj = i;
        range(j, i, n){
            if(A[j].value < A[minj].value){
                minj = j;
            }
        }
        Card g = A[i];
        A[i] = A[minj];
        A[minj] = g;
    }
}

void print(struct Card A[], int n){
    rep(i, n){
        if(!i) cout << A[i].suit << A[i].value;
        else cout << ' ' << A[i].suit << A[i].value;
    }
    cout << endl;
}

bool isStable(struct Card c1[], struct Card c2[], int n){
    rep(i, n){
        if(c1[i].suit != c2[i].suit) return false;
    }
    return true;
}

int main(){
    int n;
    while(cin >> n){
        Card c1[100], c2[100];
        rep(i ,n){
            cin >> c1[i].suit >> c1[i].value;
            c2[i] = c1[i];
        }

        bubble(c1, n);
        selection(c2, n);

        print(c1, n);
        cout << "Stable" << endl;
        print(c2, n);
        if(isStable(c1, c2, n)){
            cout << "Stable" << endl;
        }else{
            cout << "Not stable" << endl;
        }
    }
}