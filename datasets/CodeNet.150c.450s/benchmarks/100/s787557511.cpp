#include <iostream>
#include <array>

template <int N>
struct factorial {
    static const long long int value = N * factorial<N - 1>::value;
};

template <>
struct factorial<0> {
    static const long long int value = 1;
};

int main() {
    int n;
    std::array<long long int, 21> arr;
    arr[1] = factorial<1>::value;
    arr[2] = factorial<2>::value;
    arr[3] = factorial<3>::value;
    arr[4] = factorial<4>::value;
    arr[5] = factorial<5>::value;
    arr[6] = factorial<6>::value;
    arr[7] = factorial<7>::value;
    arr[8] = factorial<8>::value;
    arr[9] = factorial<9>::value;
    arr[10] = factorial<10>::value;
    arr[11] = factorial<11>::value;
    arr[12] = factorial<12>::value;
    arr[13] = factorial<13>::value;
    arr[14] = factorial<14>::value;
    arr[15] = factorial<15>::value;
    arr[16] = factorial<16>::value;
    arr[17] = factorial<17>::value;
    arr[18] = factorial<18>::value;
    arr[19] = factorial<19>::value;
    arr[20] = factorial<20>::value;
    
    std::cin >> n;
    std::cout << arr[n] << std::endl;

    return 0;
}