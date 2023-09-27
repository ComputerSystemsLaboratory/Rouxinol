#include <iostream>

int main(){
    uint64_t m,n,q = 1000000007,nl;
    std::cin >> m >> n;

    uint64_t r = 1;
    uint64_t m2 = m*m;
    uint64_t m4 = m2*m2;
    uint64_t i = 0;
    nl = n-i;
    for(uint64_t j=0;j<nl/4;j++)
    {
        r = (r*m4) %q;
        i += 4;
    }
    for(;i<n;i++)
    {
        r = (r*m) %q;
    }
    std::cout << r << "\n";
    return 0;
}


