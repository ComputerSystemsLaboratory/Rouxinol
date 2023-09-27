#include <iostream>
using namespace std;
int calc(int);

int main(){
    int a;
    int b;
    while(cin>>a>>b){
        cout << calc(a+b) <<"\n";
    }
	
    return 0;
}

int calc(int value){
    int count = 1;
    while((value /= 10) != 0){
        count++;
    }
    return count;
}