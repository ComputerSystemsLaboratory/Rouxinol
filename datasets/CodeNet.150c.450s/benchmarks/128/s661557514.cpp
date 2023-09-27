#include<iostream>
#include<string.h>

using namespace std;

int main(){
        char str [21];

        cin >> str;

        for(int i = strlen(str)-1; i >= 0; i--){
                cout << str[i];
        }
        cout << endl;
}