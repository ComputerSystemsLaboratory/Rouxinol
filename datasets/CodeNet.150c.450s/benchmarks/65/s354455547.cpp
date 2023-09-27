#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;


typedef struct {
    int num;
    char suit[2];
} Card;

void readCard(Card c[],int i){
    char cc[3],num[2];
    cin >> cc;
    
    num[0] = cc[1];
    num[1] = '\0';
    c[i].num = atoi(num);
    c[i].suit[0] = cc[0];
    c[i].suit[1] = '\0';
}

void bs(Card c[],int N){
    for (int i = 0; i < N; i++) {
        for (int j = N-1; j > i; j--) {
            if (c[j].num < c[j-1].num){
                swap(c[j],c[j-1]);
            }
        }
    }
}

void ss(Card c[],int N){
    for (int i = 0; i < N-1; i++) {
        int mini = i;
        for (int j = i+1; j < N; j++) {
            if (c[mini].num > c[j].num) {
                mini = j;
            }
        }
        if(mini != i) swap(c[i],c[mini]);
    }
}

void printCard(Card c[],int N){
    for (int i = 0; i < N; i++) {
        cout << c[i].suit << c[i].num;
        if (i != N-1) cout << " ";
    }
    cout << endl;
}

int main(){
    int N;
    Card s[36],b[36];
    cin >> N;
    for (int i = 0; i < N; i++) {
        readCard(s,i);
        b[i] = s[i];
    }
    bs(b,N);
    ss(s,N);
    
    printCard(b,N);
    cout << "Stable" << endl;
    printCard(s,N);
    
    bool flag = true;
    
    for (int i = 0; i < N; i++) {
        if(b[i].suit[0] != s[i].suit[0]){
            flag = false;
            break;
        }
    }
    
    if (flag) {
        cout << "Stable" << endl;
    }else{
        cout << "Not stable" << endl;
    }
    
    return 0;
}