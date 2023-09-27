#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int q, a, b;
string str, order, rep, sub;
char temp;

int replace(void); int reverse(void); int print(void);

int main(void){
    cin >> str >> q;
    for (int i = 0; i < q; i++){
        cin >> order;
        if (order == "replace") replace();
        if (order == "reverse") reverse();
        if (order == "print") print();
    }
    return 0;
}

int replace(void){
    scanf("%d%d", &a, &b);
    cin >> rep;
    str.replace(a, b - a + 1, rep);
    return 0;
}

int reverse(void){
    scanf("%d%d", &a, &b);
    sub = str.substr(a, b - a + 1);
    for (int i = 0; i < sub.size() / 2; i++){
        temp = sub[i];
        sub[i] = sub[sub.size() - i - 1];
        sub[sub.size() - i - 1] = temp;
    }
    str.replace(a, b - a + 1, sub);
    return 0;
}

int print(void){
    scanf("%d%d", &a, &b);
    sub = str.substr(a, b - a + 1);
    cout << sub << endl;
    return 0;
}