
//  test.cpp

#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;


int main(){
    long int j,s[1000000]={0},d=1,i,n,k;
    
    s[0]=s[1]=1;
    
    for(i=2;i<1000000;i++){
        if(s[i]==0){
            
            for(j=2;j*j<=i;j+=2){
                if(i%j==0)
                    break;
                if(j==2)
                    j=1;
            }
            
            
            if(j*j>i){
                d++;
                if(i<1000){
                    for(k=2;k*i<1000000;k++){
                        s[k*i]=-1;
                    }
                }
            }
        }
        s[i] = d;
    }
    
    while(EOF != scanf("%ld",&n)){
        printf("%ld\n",s[n]-1);
    }
    
    
    return 0;
}