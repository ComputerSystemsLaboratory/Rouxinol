#include<bits/stdc++.h>
using namespace std;

bool student[31];
int main()
{
  for(int i = 0; i < 28; i++){
    int in;
    cin >> in;
    student[in] = true;
  }

  for(int i = 1; i <= 30; i++)
    if(!student[i])
      cout << i << endl;

  return 0;
}