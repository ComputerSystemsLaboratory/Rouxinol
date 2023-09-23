#include <iostream>
using namespace std;

int main(){

int a;
int b;

cin >> a >> b; 

cout << "a " ;

if(a>b){
cout << ">";
}
else if(a==b){
cout << "==";
}
else if(a<b){
cout <<  "<";
}
cout << " b" << endl;
}