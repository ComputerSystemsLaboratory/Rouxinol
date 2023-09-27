#include <iostream>
using namespace std;

int main(){

int a;
int b;
int c;

cin >> a >> b >> c;

if(a < b && b < c){
cout << "Yes" << endl;
}
else if(a >= b || b >= c){
cout << "No" << endl;
}
}