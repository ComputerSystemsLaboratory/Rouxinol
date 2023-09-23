#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    cout << x/3600 << ":" << (x - (x/3600)*3600)/60 << ":" << x - (x/3600)*3600 - ((x - (x/3600)*3600)/60)*60 << endl;

   return 0;
}