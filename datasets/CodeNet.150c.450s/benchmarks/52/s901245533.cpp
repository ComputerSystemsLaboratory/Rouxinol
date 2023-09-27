#include <iostream>
#include <stack>
using namespace std;
int main(void){
    // Here your code !
    stack<int> s;
   for(int d;cin>>d;){
    
       if(d==0){
           cout<<s.top()<<endl;
           s.pop();}
       else{
           s.push(d);
       }
}
}