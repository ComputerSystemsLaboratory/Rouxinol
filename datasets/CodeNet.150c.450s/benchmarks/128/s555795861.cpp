#include<iostream>
using namespace std;
int main(void){
    char str[21]="";
    cin >> str;
    for(int i=20; i>=0; i--){
        if(str[i]!='\0') cout << str[i];
    }
    cout << endl;
    return 0;
}