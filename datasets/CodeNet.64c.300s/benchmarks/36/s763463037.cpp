
#include<iostream>
#include<algorithm>


 
using namespace std;
 
int main()
{
  int input[3];
  cin >> input[0] >> input[1] >> input[2];
  sort(input, input + 3);
  cout << input[0] << " " << input[1] << " " << input[2] << endl;
  return 0;
}