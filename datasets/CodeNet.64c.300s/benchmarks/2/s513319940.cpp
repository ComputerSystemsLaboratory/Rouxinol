#include <iostream>
#define N 1000000
using namespace std;
char grade_char(int);
int main()
{
  int m,f,r,j;
  char C[N];
  while(1)
    {
      cin >> m >> f >> r;
      if(m==-1&&f==-1&&r==-1) break;
      else if(m==-1||f==-1) C[j]=grade_char(0);
      else if((m+f>=30&&m+f<50)&&r>=50)  C[j]=grade_char(50);
      else if((m+f>=30&&m+f<50)&&r>=50)  C[j]=grade_char(49);
      else   C[j]=grade_char(m+f);
      j++;
    }
  for(int i=0;i<j;i++)
    {
      cout << C[i] << endl;
    }
  return 0;
}
char grade_char(int score)
{
  if(0<=score&&score<30) return 'F';
  else if(30<=score&&score<50) return 'D';
  else if(50<=score&&score<65) return 'C';
  else if(65<=score&&score<80) return 'B';
  else return 'A';
}