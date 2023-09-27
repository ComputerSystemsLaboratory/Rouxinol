#include <iostream>
using namespace std;

int main(){
    int i,max=-1,max_1=-1,max_2=-1,a;
    for(i=0;i<=9;i++){
        cin >> a;
        if(a>max){
            max_2=max_1;
            max_1=max;
            max=a;
        }
        else if(a>max_1){
            max_2=max_1;
            max_1=a;
        }
        else if(a>max_2){
            max_2=a;
        }
    }
    cout << max << endl << max_1 << endl << max_2 << endl;
}