#include<iostream>

int main()
{
    int n;

    std::cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }


    for (int i = 0; i < n; i++) {

        std::cout << a[n-i-1];

        if (i != n -1) {
            std::cout << " ";
        } else {
            std::cout << std::endl;
        }
    }
    return 0;

}