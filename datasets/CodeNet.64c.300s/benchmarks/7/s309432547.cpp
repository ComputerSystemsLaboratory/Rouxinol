#include <iostream>

using namespace std;

int main()
{
  int cards[6][16] = {{}};
  int n,d,i,B;
  char A;
  cin >>  n;
  // scanf("%d\n",&n);
  for(i=1;i<=n;i++){
    cin  >>  A >>  d ; 
    // scanf("%c %d\n",&A,&d);

    if(A=='S') {cards[0][d]=1;} 
    if(A=='H') {cards[1][d]=1;}  
    if(A=='C') {cards[2][d]=1;}  
    if(A=='D') {cards[3][d]=1;}  
  }

  for(d=1;d<=13;d++){
    if(cards[0][d]!=1) {//printf("\nS %d\n",d);}
      cout << "S" <<  ' ' << d << '\n';  
    }
  }
  
  for(d=1;d<=13;d++){
    if(cards[1][d]!=1) {//printf("H %d\n",d);}
      cout << "H" << ' ' << d << '\n';  
    }
  }
   
  for(d=1;d<=13;d++){  
    if(cards[2][d]!=1) {//printf("C %d\n",d);}
      cout << "C" << ' ' << d << '\n';
    }
  }
   
  for(d=1;d<=13;d++){  
    if(cards[3][d]!=1) {//printf("D %d\n",d);}
      cout << "D" << ' ' << d << '\n';
    }
  }
  return 0;
}