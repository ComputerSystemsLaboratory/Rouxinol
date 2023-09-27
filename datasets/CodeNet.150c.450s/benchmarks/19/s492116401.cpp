#include <iostream>
using namespace std;
int main(void){
    int a,b;
    for(int i=1; i<=3000; i++){
        cin>>a>>b;
        if(a==0 && b==0){
            break;
        }
        else if(a>b){
            swap(a,b);
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}

