#include<iostream>
using namespace std;

int main(){



int x ;
cin >> x;

int y = x % 3600;


cout << int(x / 3600) << ":" << y / 60 << ":" << y % 60 << endl;


return 0;
}

