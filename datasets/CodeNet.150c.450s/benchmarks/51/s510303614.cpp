#include <iostream>
using namespace std;

bool student[31];

int main()
{
  int n;
  for (int i = 0; i < 28; i++){
    cin >> n;
    student[n] = true;
  }
  for (int i = 1; i < 31; i++){
    if (!student[i])  cout << i << endl;
  }
  return (0);
}