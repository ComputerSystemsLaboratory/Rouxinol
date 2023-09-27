#include <iostream>
#include <stdio.h>
using namespace std;
int main(void){
    // Your code here!
    
    while(1){
    int m = 0;
    int nMin = 0;
    int nMax = 0;
    
    scanf("%d %d %d",&m,&nMin, &nMax);
    if(m==0 && nMin == 0 && nMax == 0)break;
    
    int p[2100] = { 0 };
    
    for(int i=0;i<m;i++){
        scanf("%d",&p[i]);
    }
    
    int gap = 0;
    int gap_i = 0;
    
    for(int i=0;i<m;i++){
        for(int j=nMin-1;j<nMax;j++){
            if(p[j]-p[j+1]>=gap){
                gap = p[j]-p[j+1];
                gap_i = j+1;
            }
            }
        }
    
    cout << gap_i << endl;
    }
    
    
    return 0;
}
