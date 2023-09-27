#include <iostream>
#include <string>
#include <sstream>

int partition(int* arr, int n) 
{
    const int x = arr[n - 1];   //pivot value
    int i = 0;  //increment if swaped
    int j = 0;  //increment every loop
    for (; j < n; ++j) {   //scan start to end
        if (arr[j] <= x) {
            std::swap(arr[i], arr[j]);
            ++i;
        }
    }
    return i - 1;
}

void print(int const* arr, const int n, int q, int i)
{
    if (i == n - 1 ) {
        std::cout << arr[i] << std::endl;
        return;
    }
    
    if (i == q) {
        std::cout << "[" << arr[i] << "] ";
    }
    else {
        std::cout << arr[i] << " ";
    }

    return print(arr, n, q, i + 1);
}

void print(int const* arr, const int n, int q)
{
    print(arr, n, q, 0);
    return;
}

int main()
{
    int n;
    {
        std::string buf;
        std::getline(std::cin, buf);
        n = std::stoi(buf);
    }

    int arr[100000];
    {
        std::string buf;
        std::getline(std::cin, buf);
        std::stringstream stream;
        stream << buf;
        for (int i = 0; std::getline(stream, buf, ' '); ++i) {
            arr[i] = std::stoi(buf);
        }
    }

    int q = partition(arr, n);
    print(arr, n, q);

    return 0;
}