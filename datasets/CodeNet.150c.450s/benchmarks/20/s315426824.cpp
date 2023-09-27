#include <iostream>
using namespace std;
int main(void){
int ti;
cin >> ti;
int h = ti/3600;
ti -= h*3600;
int m = ti/60;
ti-=m*60;
cout << h << ":"<<m<<":"<<ti << endl;
}