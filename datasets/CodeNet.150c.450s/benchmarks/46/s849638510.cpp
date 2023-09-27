#include<iostream>
using namespace std;

int main()
{
    int n, x;
    int sum=0;
    for(int i=0; ; i++){
        cin >> n >> x;
        if(n==0 && x==0) break;
        for(int a=1; a<=n; a++){
            for(int b=a+1; b<=n; b++){
                for(int c=b+1; c<=n; c++){
                    if(a+b+c==x){
                        sum++;
                    }
                }
            }
        }
        cout << sum << endl;
        sum = 0;
    }
    
    return 0;
}