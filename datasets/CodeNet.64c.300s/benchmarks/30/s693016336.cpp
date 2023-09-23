#include <iostream>
using namespace std;

int main()
{
int value, coins = 0;
while(true){
cin >> value;
if(value == 0) break;
value = 1000-value;
coins += value/500; value%=500;
coins += value/100; value%=100;
coins += value/50; value%=50;
coins += value/10; value%=10;
coins += value/5; value%=5;
coins += value;
cout << coins << endl;
coins = 0;
}
return 0;
}