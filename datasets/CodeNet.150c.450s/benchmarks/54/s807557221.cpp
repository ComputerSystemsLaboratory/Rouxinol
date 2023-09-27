#include <iostream>
#include <string>
#include <algorithm>


using std::string;

int main()
{
    string target;
    std::cin >> target;

    int cnt = 0;

    string in;
    while (true) {
        std::cin >> in;

        if (in == "END_OF_TEXT") {
            break;
        }

        transform(in.begin(), in.end(), in.begin(), tolower);

        if (in == target) {
            cnt++;
        }
    }

    std::cout << cnt << std::endl;

    return 0;
}