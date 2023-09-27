#include<iostream>
using namespace std;

int main(){
    int input;
    int counter=1;
    while(1){
        cin >> input;
        if(input==0){
            break;
        }else{
            cout << "Case " << counter << ": " << input << endl;
            counter++;
        }
    }
    return 0;
}