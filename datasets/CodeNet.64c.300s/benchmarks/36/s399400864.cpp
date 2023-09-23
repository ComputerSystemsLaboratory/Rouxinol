#include <iostream>
using namespace std;

void swap(int*,int*);
int main(){
  int a,b,c,tmp;
  cin >> a >> b >> c;
  if(c<a) swap(&a,&c);
  if(b<a) swap(&a,&b);
  if(c<b) swap(&b,&c);
  cout << a << " "<< b << " " << c << endl;
  return 0;
}
void swap(int* a, int* b){
  int tmp;
  tmp = *a;
  *a =*b;
  *b = tmp;
}

