#include <iostream>

int main()
{
    int x;
    for(int i=1;;i++){
        std::cin>>x;
        if(x==0)break;
        std::cout<<"Case "<<i<<": "<<x<<std::endl;
    }
    return 0;
}