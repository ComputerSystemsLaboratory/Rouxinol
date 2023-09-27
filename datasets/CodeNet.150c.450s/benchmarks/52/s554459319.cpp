#include<cstdio>
#include<stack>
using namespace std;
int main(){
    int a;
    stack<int>car;
    while(scanf("%d",&a)!=EOF){
    if(a!=0){
        car.push(a);
    }
    else{
        int b=car.top();
        printf("%d\n",b);
        car.pop();
    }
    }
    return 0;
}