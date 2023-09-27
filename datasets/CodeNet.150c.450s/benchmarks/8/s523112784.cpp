#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main() {
    int n;
    int taro = 0, hanako = 0;
    string tarocard, hanakocard;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> tarocard >> hanakocard;
        if(tarocard.compare(hanakocard) == 0) { 
            taro++; 
            hanako++;
        } else if (tarocard.compare(hanakocard) > 0) {
            taro += 3;
        } else {
            hanako += 3;
        }
    }
    cout << taro << " " << hanako << endl;
}
