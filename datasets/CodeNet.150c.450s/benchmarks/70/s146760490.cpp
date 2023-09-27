//1=31,2=29,3=31,4=30,5=31,6=30,7=31,8=31,9=30,10=31,11=30,12=31//
#include <iostream>
#include<string>
using namespace std;
int main(){
    string str[7]{"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
    int t[11]{31,60,91,121,152,182,213,244,274,305,335};
    //        0   1  2  3   4   5   6  7    8   9   10//
    int d,m;
    while(cin>>m>>d){
        if(m==0)break;
        if(m==1)cout<<str[d%7]<<endl;
        else{
            d=d+t[m-2];
            cout<<str[d%7]<<endl;
        }
    }
    return 0;
}