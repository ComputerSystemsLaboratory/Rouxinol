#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int n=0;
    cin>>a >>b >>c;
    while(a<=b){
        if(c%a==0)n+=1;
        a+=1;
    }
    cout<<n<<endl;
    return 0;
}
