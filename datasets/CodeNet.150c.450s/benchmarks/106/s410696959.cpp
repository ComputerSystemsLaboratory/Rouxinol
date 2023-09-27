#include<iostream>
using namespace std;

int main(){
    int a,b,c,count;
    cin >> a >> b >>c;
    while(a<=b){
        if (c%a==0){
            count+=1;
        }
        a+=1;
    }
    cout << count <<endl;
}
