#include <iostream>
#include <stdio.h>
using namespace std;

void updateRank(int *a,int in){
    int tmp;
    for(int ii=0;ii<3;ii++){
        if(a[ii] < in){            
            tmp = a[ii];
            a[ii] = in;
            
            for(int jj=ii+1;jj<3;jj++){
                int tmp2;
                tmp2 = a[jj];
                a[jj] = tmp;
                tmp = tmp2;
            }
            break;
        }
    }
}
int main(){
    
    int out[3];
    for(int ii=0;ii<10;ii++){
        int in;
        cin >> in;
        updateRank(out,in);
    }
    
    for(int ii=0;ii<3;ii++){
        cout << out[ii] << endl;
    }
    return 0;
}