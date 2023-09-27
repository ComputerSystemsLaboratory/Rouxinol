#include <iostream>
#include<cstdio>
using namespace std;

int main(void){
    int S;
    int h;
    int m;
    int s;
   cin >> S;
   h=S/3600;
   cout <<h;
   cout <<":";
   m=(S%3600)/60;
   cout <<m;
   cout <<":";
   s=(S%3600)%60;
   cout <<s;
   cout <<endl;
}
