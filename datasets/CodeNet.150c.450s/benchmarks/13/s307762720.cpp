#include <iostream>
#include <string>

using namespace std;


int main(void){

  string str_1;
  string str_2;

  cin >> str_1 >> str_2;

  str_1 += str_1;

  if(str_1.find(str_2) == -1)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;

  return 0;
}