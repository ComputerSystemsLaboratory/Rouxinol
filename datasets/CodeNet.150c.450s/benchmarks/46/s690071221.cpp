#include <iostream>
int main()
{
    int n,x;
    int i=0;
    while(true){
    std::cin >> n >> x;
        if(n==0 && x==0)break;
    i=0;
    for(int a=1;a<=n;a++){
        for(int b=1;b<=n;b++){
            for(int c=1;c<=n;c++){
                if(a+b+c==x){
                    if(a!=b && b!=c && c!=a){
                        i++;
                    }
                }
            }
        }
    }
    std::cout << i/6 << std::endl;
    }
    return 0;
}