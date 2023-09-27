#include <iostream>
#include <string>

using namespace std;

int main()
{
 int array[10001];
 int i = 0;
 while (cin>>array[++i]){}
 i = 0;
 while (array[++i])
 {
  cout << "Case " << i << ": " << array[i] << endl;
 }
 return 0;
}

