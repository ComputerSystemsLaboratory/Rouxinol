#include <iostream>
#include <cstdlib>

using namespace std;

int  rank_by_mark(char c);
char mark_by_rank(int i);

int main()
{  
    int  n;
    char mark;
    int  rank;
    int  cards[4][13];
       
    for (int i = 0; i < 4; i++) {
         for (int j = 0; j < 13; j++) {
	      cards[i][j] = 0;
         }
    }      
     
    do {
        cin >> n;        
    } while (n > 52);
      
    for (int i = 0; i < n; i++) {   
         cin >> mark >> rank;                                         
         cards[rank_by_mark(mark)][rank - 1] = 1;
    }
        
    for (int i = 0; i < 4; i++) {
         for (int j = 0; j < 13; j++) {
	      if (cards[i][j] == 0) {
                  cout << mark_by_rank(i) << " " << j + 1 << endl;
              }
         }
    }
    
    return (0);
}

int rank_by_mark(char c)
{
    if (c == 'S') {
        return (0);
    } else if (c == 'H') {
        return (1);
    } else if (c == 'C') {
        return (2);
    } else if (c == 'D') {
        return (3);
    } else {
        exit(0);
    }
}

char mark_by_rank(int i)
{
     if (i == 0) {
         return ('S');
     } else if (i == 1) {
         return ('H');
     } else if (i == 2) {
         return ('C');
     } else if (i == 3) {
         return ('D');
     } else {
         exit(0);
     }
}