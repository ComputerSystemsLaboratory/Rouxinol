#include <iostream>
#include <string>

using std::string;

int main()
{
    string ring;
    string target;
    std::cin >> ring >> target;

    string ringring = ring.append(ring);

    size_t idx = ringring.find(target, 0);
    if (idx != string::npos) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}