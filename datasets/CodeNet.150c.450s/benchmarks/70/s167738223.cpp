#include<iostream>
#include<string>

int monthes[]={0,31,29,31,30,31,30,31,31,30,31,30,31};

std::string day[]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};

int main(void){
    int m,d,n;
    while(std::cin>>m>>d){
        if(m==0&&d==0) break;
        n=0;
        int i;
        for(i=1;i<m;i++) n+=monthes[i];
        n+=d;
        std::cout<<day[n%7]<<std::endl;
    }
    return 0;
}
