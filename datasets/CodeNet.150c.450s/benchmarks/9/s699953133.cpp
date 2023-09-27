#include <cstdio>
#include <string>
using namespace std;
int main() {
    while (true) {
        char tmp[210];
        scanf("%s", tmp);
        string cards = tmp;
        if (cards == "-") {
            break;
        }

        int count;
        scanf("%d", &count);
        int sum = 0;
        for (int i = 0; i < count; i++) {
            int tmp;
            scanf("%d", &tmp);
            sum += tmp;
        }
        int shuffle_count = sum % cards.size();
        string left = cards.substr(0, shuffle_count);
        string right = cards.substr(shuffle_count, cards.size());
        printf("%s\n", (right + left).c_str());
    }
}