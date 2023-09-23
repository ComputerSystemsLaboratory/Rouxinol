#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main() {
    int a[4],b[4];
    
    while((cin>>a[0]>>a[1]>>a[2]>>a[3])){
        cin>>b[0]>>b[1]>>b[2]>>b[3];
        int hit =0;
        for(int i=0; i<4; i++){
            if(a[i]==b[i]){
                hit++;
                a[i]=10;
                b[i]=10;
            }
        }
        
        int blow=0;
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                if(b[i]==10){
                    break;
                }
                if(b[i]==a[j]){
                    blow++;
                    a[j]=10;
                }
            }
        }
        cout<<hit<<" "<<blow<<endl;
    }
    return 0;
}