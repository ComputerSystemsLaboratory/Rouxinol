#include<iostream>

using namespace std;

int main()
{
int n;
cin >> n;

for (int i = 1; i <= n; i++)
{
int x = i / 10;
int y = i / 100;
int z = i / 1000;
if (i % 3 == 0)
 cout << " "<< i;
else if (i % 10 == 3)
 cout << " " << i;
else if (x % 10 == 3)
 cout << " " << i;
else if (y % 10 == 3)
 cout << " " << i;
else if (z % 10 == 3)
 cout << " " << i;
}
cout << endl;
}