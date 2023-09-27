#include <iostream>
int main(){
    int a, b, x, i, n;
    long long int s = 0;
    a=-1000000;//MAX
    b=1000000;//min
    std::cin >> n;
    for(i=0;i<n;i++){
        std::cin >> x;
        s += x;
        if(x > a) a = x;
        if(x < b) b = x;      
    }
    std::cout << b << " " << a << " " << s << std::endl;
    return 0;
}
