#include<iostream>
using namespace std;

int main()
{
    int sec;
    cin>>sec;
    int h,m,s;
    h=sec/3600;
    m=(sec-h*3600)/60;
    s=(sec-h*3600-m*60);
    cout<<h<<":"<<m<<":"<<s<<endl;
}
