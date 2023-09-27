#include <iostream>
#include<string>
#include <math.h>
using namespace std;

int main() {
    int num;
    scanf("%d",&num);
    int amida[num+1];
    for(int i = 0;i <= num; i++){
        amida[i] = i;
    }
    
    int bars;
    scanf("%d",&bars);
    int a,b;
    
    for(int i = 0; i < bars;i++){
        (cin>>a).ignore()>>b;
        swap(amida[a], amida[b]);
    }
    
    for(int i = 1; i <= num;i++){
        cout<<amida[i]<<endl;
    }
    return 0;

}