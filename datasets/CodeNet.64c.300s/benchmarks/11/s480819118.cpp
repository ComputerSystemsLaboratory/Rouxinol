#include <iostream>
#include <math.h>
using namespace std;

double calcHour(int s);
double calcMin(int s);
double calcS(int s);

int main(int argc, const char * argv[]) {
    int s;
    cin >> s ;
    cout << calcHour(s) <<  ":" << calcMin(s) <<  ":" << calcS(s) << endl;
    return 0;
}

double calcHour(int s){
    return floor(s/3600);
}

double calcMin(int s){
    
    
    return floor((s % 3600) / 60);
}

double calcS(int s){
    return s % 60;
}