#include<iostream>

int main(int argc, char const *argv[])
{
    int a,b;

    std::cin >> a >> b;
    if(b > a){
        int tmp = a;
        a = b;
        b = tmp;
    }


    while(1){
        if(b != 0){
            int tmp = b;
            b = a % b;
            a = tmp;
        }
        else break;
    }

    std::cout << a << std::endl;

    return 0;
}

