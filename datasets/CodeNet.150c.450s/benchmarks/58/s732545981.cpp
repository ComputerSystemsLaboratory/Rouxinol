#include<iostream>
using namespace std;

int main(){
        long int stack[199]={0};
        char buf='a';
        long int i=0;
        while(buf!='\n'){
                cin.get(buf);
                if(buf==' '){
                        i++;
                }else if(buf=='+'){
                        i=i-2;
                        stack[i]=stack[i]+stack[i+1];
                        stack[i+1]=0;
                }else if(buf=='-'){
                        i=i-2;
                        stack[i]=stack[i]-stack[i+1];
                        stack[i+1]=0;
                }else if(buf=='*'){
                        i=i-2;
                        stack[i]=stack[i]*stack[i+1];
                        stack[i+1]=0;
                }else if(buf=='\n'){
                        break;
                }else{
                        stack[i]=stack[i]*10+buf-0x30;
                }   
        }
        cout<<stack[i]<<endl;

        return 0;
}