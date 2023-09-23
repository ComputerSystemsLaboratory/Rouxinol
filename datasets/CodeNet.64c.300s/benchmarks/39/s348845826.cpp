#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;



int main(){
    int n,cnt;
    int num[10000],i=0;
    for(int a=0;a<10;a++)
        for(int b=0;b<10;b++)
            for(int c=0;c<10;c++)
                for(int d=0;d<10;d++){
                    num[i]=a+b+c+d;
                    i++;
                }
    
    while(cin >> n){
        cnt = 0;
        for(int j=0;j<10000;j++){
            if(n==num[j]) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}