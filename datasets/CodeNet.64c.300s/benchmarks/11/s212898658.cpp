#include <iostream>
using namespace std;

int main(){
int s; cin >> s;
cout << s/3600 <<":";
s = s%3600;
cout << s/60 << ":";
cout << s%60 << "\n";

}