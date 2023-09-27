#include <iostream>
using namespace std;

int main()
{
 int num[5];
 
 for(int i=0; i<5; i++) cin >> num[i];

 for(int i=0; i<5; i++){
  for(int j=i+1; j<5; j++){
   if(num[i] < num[j]){
    int tmp = num[i];
    num[i] = num[j];
    num[j] = tmp;
   }
  }
 }

 for(int i=0; i<5; i++){
  cout << num[i];
  if(i == 4) break;
  cout << ' ';
 }
 cout << '\n';

 return 0;
}