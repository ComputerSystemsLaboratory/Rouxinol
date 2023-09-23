#include<iostream>

using namespace std;

int main()
{
int a,b;
cin >> a;
cin >> b;

if (a < b)
cout << "a < b" << '\n';
else if (a == b)
cout << "a == b" << '\n';
else
cout << "a > b" << '\n'; 
}