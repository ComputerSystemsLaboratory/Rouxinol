#include<iostream>
using namespace std;
int main(){
    int a,b,i,s,ten=1;
    while(cin >> a >> b ){
        s=a+b;
        for(i=1;i<8;i++){
            ten=ten*10;
            if(s/ten==0){
                cout << i << endl;
                break;
            }
        }
        ten=1;
    }

return 0;
}