#include <iostream>
using namespace std;

int main(){

int S, h, m, s, x;

cin >> S;

h = S / 3600;
x = S % 3600;
m = x / 60;
s = x % 60;


cout << h << ":" << m << ":" << s << "\n";

return 0;
}