#include<iostream>
#include<stack>
using namespace std;
 
int main(){
    int i,cnum = 0;
    stack<int> car;
    while(cin >> i){
        if(i != 0){
            car.push(i);
            cnum++;
        }else if(cnum == 0){
            
        }else{
            cout << car.top() << endl;;
            car.pop();
            cnum--;
        }
    }
    return 0;
}