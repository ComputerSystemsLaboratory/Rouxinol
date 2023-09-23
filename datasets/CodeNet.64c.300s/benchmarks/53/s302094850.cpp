#include<iostream>
using namespace std;
#define MAX 10000

int main(void)
{
  int a,b,c,count;
  do{
    cin >> a >> b >> c ;
  }while(a < 1 || a > MAX || b < 1 || b > MAX || c < 1 || c > MAX || a > b);
  
  for(int i = a;i <= b;i++){
    if(c % i == 0) count++;
  }
  cout << count << endl;
  return 0;
}