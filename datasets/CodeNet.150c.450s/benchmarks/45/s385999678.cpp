#include <iostream>

int main(){
    int64_t m,n,q = 1000000007;
    std::cin >> m >> n;

    int64_t r = 1;
    int64_t m2 = m*m;
    int64_t m4 = m*m*m*m;
    int64_t i = 0;
    for(int64_t j=0;j<n/4;j++)
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


