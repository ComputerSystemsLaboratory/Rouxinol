#include <stdio.h>
#include <string.h>

char result[100000];

void calculation(int multi){
    int carry=0,i,j=0;
    for(i=0;result[i]!=NULL;i++){
        carry+=(result[i]-48) * multi;
        result[j++]=(carry % 10) + 48;
        carry/=10;
    }
    while(carry){
        result[j++]=(carry % 10) + 48;
        carry/=10;
    }
    result[j]=NULL;
}

int main(){
    int i,input_number,multiplier,fact;

    scanf("%d",&input_number);
        result[0]=52;
        result[1]=50;
        result[2]=NULL;
        if(1<=input_number&&input_number<=4){
            fact=1;
            for(i=1;i<=input_number;i++){
                fact*=i;
            }
            printf("%d\n",fact);
        }

        else if(input_number==0)
            printf("1");

        else{
        for(i=5;i<=input_number;i++){
            multiplier=i;
            calculation(multiplier);
        }
        int con=strlen(result);
        for(i=con-1;i>=0;i--){
            printf("%c",result[i]);
        }
        printf("\n");


        }
    return 0;
}