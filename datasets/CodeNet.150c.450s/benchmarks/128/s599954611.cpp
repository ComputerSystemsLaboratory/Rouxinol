#include<iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    int size = str.size();
    for(int i=0;i<size;++i){
        cout << str[size-1-i];
    }
    cout << endl;
}