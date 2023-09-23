#include <bits/stdc++.h>
using namespace std;
int main() {
for (int i = 0; i < 114514; i++){
int a, b; 
string op; 
cin >> a >> op >> b; 
if(op == "+") cout << a + b << endl;  
if(op == "-") cout << a - b << endl;
if(op == "*") cout << a * b << endl;
if(op == "/") cout << a / b << endl;
if(op == "?") break; 
}
}
