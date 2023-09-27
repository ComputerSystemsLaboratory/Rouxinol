#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int day[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int m,d;
    while(cin>>m>>d,m,d){
        int da=0;
        for(int i=0;i<m-1;i++){
            da+=day[i];
        }
        da+=d;
        da%=7;
        if(da==1)
            cout<<"Thursday"<<endl;
        if(da==2)
            cout<<"Friday"<<endl;
        if(da==3)
            cout<<"Saturday"<<endl;
        if(da==4)
            cout<<"Sunday"<<endl;
        if(da==5)
            cout<<"Monday"<<endl;
        if(da==6)
            cout<<"Tuesday"<<endl;
        if(da==0)
            cout<<"Wednesday"<<endl;

    }
    return 0;
}