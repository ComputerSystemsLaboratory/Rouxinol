#include <iostream>

using namespace std;

int main(){
    
    int a,b;
    cin >> a >> b;

    int temp;
    int result;

    if(a > b){
        temp = a % b;
        for(int i=1; i<=temp; i++){
            if( (temp%i == 0) && (b%i == 0)) result = i;
        }
    }else if(b > a){
        temp = b % a;
        for(int i=1; i<=temp; i++){
            if( (a%i == 0) && (temp%i == 0)) result = i;
        }
    }else{
        result = a;
    }

    cout << result << endl;

    return 0;
}