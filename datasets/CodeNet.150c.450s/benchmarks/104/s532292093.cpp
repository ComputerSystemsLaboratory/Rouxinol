#include<iostream>
using namespace std;
int main()
{
  int tate,yoko,lot[31];
  cin >> tate >> yoko;
  for(int i=1; i<=tate; i++)
    lot[i]=i;
  while(yoko-->0){
    int a,b,temp;
    char x;
    cin >> a >> x >> b;
    temp=lot[a];
    lot[a]=lot[b];
    lot[b]=temp;
  }
  for(int i=1; i<=tate; i++)
    cout << lot[i] << endl;
}