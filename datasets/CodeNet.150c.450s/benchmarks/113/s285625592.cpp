#include <iostream>
#include <array>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]){
  int i,j = 1;
  for(;;){
    cin >> i;
    if(i == 0)break;
    cout << "Case "<< j << ": " << i << endl;
    j++;
  }
  return 0;
}