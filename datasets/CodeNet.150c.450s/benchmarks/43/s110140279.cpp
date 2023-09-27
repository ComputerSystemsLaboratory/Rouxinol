#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int num;
    while(1){
        int a_score=0;
        int b_score=0;
        scanf( "%d", &num );
        if(num==0)break;
        for(int i=0;i<num;i++){
            int a_card,b_card;
            scanf("%d %d",&a_card,&b_card);
            if(a_card>b_card){a_score+=a_card+b_card;}
            else if(a_card==b_card){a_score+=a_card;b_score+=b_card;}
            else b_score+=a_card+b_card;
        } 
        cout<<a_score<<" "<<b_score<<endl;
    }
    
}