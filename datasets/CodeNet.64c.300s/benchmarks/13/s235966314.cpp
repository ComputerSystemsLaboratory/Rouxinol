#include <iostream>
using namespace std;
int solution(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    int one=1,two=1,tmp;
    for(int i=1;i<n;i++){
    tmp = two;
    two = two+one;
    one = tmp;
}
    return two;
}

int main(){
    int n;
    cin>>n;
    cout<<solution(n)<<endl;
return 0;
}