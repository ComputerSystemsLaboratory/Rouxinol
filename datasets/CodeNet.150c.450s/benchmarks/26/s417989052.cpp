#include <iostream>

using namespace std;

int main()
{

int a, b;

cin >> a >> b;

if(a - b > 0)
{
cout << "a > b" << endl;
}
else if(b - a > 0)
{
cout << "a < b" << endl;
}
else if(a == b)
{
cout << "a == b" << endl;
}

return 0;

}