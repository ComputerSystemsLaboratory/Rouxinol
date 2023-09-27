#include<iostream>
using namespace std;

#define hour 3600
#define min 60

int main(){

int S;

cin >> S;

cout << S/hour << ':' << (S%hour)/min << ':' << (S%hour)%min << endl;
}