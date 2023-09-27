#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int m,c,f,r; 
    while(1){
        cin>>m>>f>>r;
        c=m+f;  
        if(m==-1&&f==-1&&r==-1)break;
        else if(m==-1||f==-1){
            printf("F\n");
        }
        else if(80<=c){
            printf("A\n");
        }
        else if (65<=c&&c<80){
            printf("B\n");
        }
        else if (50<=c&&c<65){
            printf("C\n");
        }
        else if (c>=30&&r>=50){
            printf("C\n");
        }
        else if (c>=30&&r<50){
            printf("D\n");
        }
        else if (c<30){
            printf("F\n");
        }
    }
     
    return 0;
}