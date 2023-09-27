#include <iostream>
using namespace std;
int main(void){
    
    int a[4][13]={{0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0}};
    char m[4]={'S','H','C','D'};
    int i,j,num,n;
    char mark;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> mark >> num ;
        if (mark=='S') a[0][num-1]=1;
        else if(mark=='H') a[1][num-1]=1;
        else if(mark=='C') a[2][num-1]=1;
        else if(mark=='D') a[3][num-1]=1;
    }
    
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(a[i][j]==0){
                cout << m[i] <<" "<< j+1 << endl;
            }
        }
    }
   
}

