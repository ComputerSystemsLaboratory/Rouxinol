#include<iostream>
using namespace std;

double area(double a, double b);

double around(double a, double b);

int main(){
int a, b;
cin >> a >> b;

cout << area(a,b) << ' ' << around(a,b) << endl;

}

double area(double a, double b){
return a*b;
}

double around(double a, double b){
return 2*(a+b);
}