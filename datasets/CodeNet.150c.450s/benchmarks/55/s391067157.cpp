#include <iostream>
#include <string>
using namespace std;
int main(){
    string number;
    int num=0;
    while(1){
        cin>>number;
        if(number[0]=='0'){
            break;
        }
        else{
            for(int i=0;i<number.size();i++){
                num += number[i] - '0';
            }
            cout<<num<<endl;
            num =0;
        }
    }
return 0;
}
