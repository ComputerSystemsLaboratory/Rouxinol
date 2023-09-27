#include<iostream>
#include<algorithm>
#include<set>
#include <string>
#include<stdio.h>
#include<cmath>

using namespace std;

int main(){
    int A,l;

    while (1) {
        cin>>A>>l;
        if(A==0 && l==0){
            return 0;
        }

        int max,min,dif,com;
        bool f = true;
        int* a=new int[22];
        int* num= new int[l];

        a[0]=A;

        for(int i=1; i<22; i++){
            a[i]=-1;
        }
        for(int i=0; i<21; i++){
            max=0;
            min=0;
            dif=0;

            com = a[i];
            for(int j=0; j<l; j++){
                num[j] = com%10;        //各桁ごとに配列に記憶
                com = com/10;
            }

            sort(num, num+l);   //並び替え

            for(int j=0; j<l; j++){
                max+=num[j]*pow(10,j);
                min+=num[j]*pow(10,l-1-j);
            }
            dif = max-min;
            a[i+1]=dif;

            for(int j=0; j<i+1; j++){
                if(dif==a[j]){
                    printf("%d %d %d\n", j, dif, i-j+1);
                    f=false;
                    break;
                }
            }
            if(!f){
                break;
            }
        }
    }
}

