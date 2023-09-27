#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int val;
  int count[101];

  fill(count, count+101, 0);

  while(cin>>val){
    ++count[val];
  }

  val = 0;
  for(int i = 1; i < 101; ++i)
    val = max(val, count[i]);

  for(int i = 1; i < 101; ++i)
    if(count[i] == val)
      cout << i << endl;

  return 0;
}