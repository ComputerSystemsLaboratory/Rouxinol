#include <iostream>
using namespace std;
int main(void){
    int a,b;
    cin>>a;
    
    for(int i = 1;i<=a;i++){
    b =i;
    if(i%3 == 0)cout<<" "<<i;
    else if(b%10==3)cout<<" "<<i;
    else if(b/10%10 == 3)cout<<" "<<i;
    else if(b/100%10 == 3)cout<<" "<<i;
    else if(b/1000%10 == 3)cout<<" "<<i;
    }
    cout<<endl;
    return 0;
}

