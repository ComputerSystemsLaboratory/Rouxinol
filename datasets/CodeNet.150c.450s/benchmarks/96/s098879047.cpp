#include <bits/stdc++.h>
#define NIL -1

int N;

int main()
{
    char com[][5] = {
        {},
        {'.', ',', '!', '?', ' '},
        {'a', 'b', 'c'},
        {'d', 'e', 'f'},
        {'g', 'h', 'i'},
        {'j', 'k', 'l'},
        {'m', 'n', 'o'},
        {'p', 'q', 'r', 's'},
        {'t', 'u', 'v'},
        {'w', 'x', 'y', 'z'}
    };
    int lens[] = {0, 5, 3, 3, 3, 3, 3, 4, 3, 4};
    std::cin >> N;
    std::string msg;


    for (int t = 0; t < N; t++) {
        std::cin >> msg;
        std::string res;
        int cnt = NIL;
        char btn = '#';

        bool isPressed0 = false;

        //find first index where character is not 0
        unsigned long start = 0;
        for (unsigned long i = 0; i < msg.size(); i++) {
            if (msg[i] != '0') {
                start = i + 1;
                btn = msg[i];
                cnt = 0;
                break;
            }
        }

        for (unsigned long i = start; i < msg.size(); i++) {
            //if 0 is already pushed
            if (msg[i] == '0' && isPressed0) { continue; }

            else if (msg[i] == '0' && !isPressed0) {
                int idx = (int) btn - '0';
                res += com[idx][cnt % lens[idx]];
                isPressed0 = true;
            }

            else if (msg[i] != '0' && isPressed0) {
                cnt = 0;
                btn = msg[i];
                isPressed0 = false;
            }

            else {
                cnt++;
            }
        }

        std::cout << res << std::endl;
    }
    return 0;
}

