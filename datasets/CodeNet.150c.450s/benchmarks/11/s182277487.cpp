#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
 
int main(void){
    int cards[4][13]={},n;
    char mark;
    int number;
    cin>> n;
    for (int i= 0;i<n;i++){
        cin>> mark>> number;
        switch(mark){
                case 'S':
                    cards[0][number-1] = 1;
                    break;
                 
                case 'H':
                    cards[1][number-1] = 1;
                	break;
                case 'C':
                	cards[2][number-1] = 1;
                	break;
                case 'D':
                	cards[3][number-1] = 1;
              	  break;
        }
    }
    for (int k = 0; k < 4;k++){
        for (int j = 0; j < 13;j++){
            if (cards[k][j] == 0) {
                switch (k) {
                    case 0:
                        cout<< "S ";
                        break;
                    case 1:
                        cout<< "H ";
                        break;
                    case 2:
                        cout<< "C ";
                        break;
                    case 3:
                        cout<< "D ";
                        break;
                         
                }
                cout<< j +1<< endl;
            }
        }
    }
    return 0;
}