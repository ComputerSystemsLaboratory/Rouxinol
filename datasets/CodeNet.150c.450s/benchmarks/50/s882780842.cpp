#include<iostream>
using namespace std;
int main(void)
{
    int mo,fite,hund,fiten,ten,go,one;
    while(1){
    cin>>mo;
    if(mo==0)break;
    mo=1000-mo;
    fite=mo/500;
    hund=mo%500/100;
    fiten=mo%500%100/50;
    ten=mo%500%100%50/10;
    go=mo%500%100%50%10/5;
    one=mo%500%100%50%10%5;
    //cout<<fite<<" "<<hund<<" "<<fiten<<" "<<ten<<" "<<go<<" "<<one<<"\n";
    cout<<fite+hund+fiten+ten+go+one<<"\n";
}
}