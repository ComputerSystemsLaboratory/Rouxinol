// Example program
#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;

cin >> a;
cin >> b;
cin >> c;
cin >> d;
cin >> e;
cin >> f;
cin >> g;
cin >> h;

int s=(a+b+c+d);
int t=(e+f+g+h);

if(t>s){
    cout << t << endl;
}else{
    cout << s << endl;
}
}