#include <iostream>
#include <string>

using std::string;

int main()
{
    while (true) {
        string in;
        std::cin >> in;

        if (in == "-") {
            break;
        }

        int shuffle_num;
        std::cin >> shuffle_num;

        int head = 0;
        while (shuffle_num--) {
            int cards_num;
            std::cin >> cards_num;

            head = (head + cards_num) % in.size();
        }

        string out = in.substr(head) + in.substr(0, head);
        std::cout << out << std::endl;
    }

    return 0;
}