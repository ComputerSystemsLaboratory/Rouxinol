#include<iostream>
#include<string>
using namespace std;

int main()
{
    string day[]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
    int Mon[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int m,d;
    while(cin>>m>>d,m*d){
        int allDay=d;
        for(int i=0;i<m-1;i++){
            allDay += Mon[i];
        }
        cout<<day[allDay%7]<<endl;
    }
}