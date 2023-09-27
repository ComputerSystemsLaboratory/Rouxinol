#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int i[5],a=0;
    for(;a<5;a++)cin>>i[a];
    sort(i,i+5,greater<int>());
    for(a=0;a<4;a++)cout<<i[a]<<' ';
    cout<<i[4]<<endl;
}