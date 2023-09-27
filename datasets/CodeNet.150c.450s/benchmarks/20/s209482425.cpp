#include<iostream>
using namespace std;
int main () {

int B;
cin >> B;
int h, m, s;
h = (B-(B%3600))/3600;
m = (B%3600-((B%3600)%60))/60;
s = B-h*3600-m*60;
cout << h << ':' << m << ':' << s << endl;
}
