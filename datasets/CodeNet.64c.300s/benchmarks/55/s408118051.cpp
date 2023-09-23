#include<iostream>
using namespace std;
int main(void){
    int n,cnt=1;
    while(1){
        cin>>n;
        if(n==0)break;
        cout<<"Case "<<cnt<<": "<<n<<endl;
        cnt++;
    }
    return 0;
}