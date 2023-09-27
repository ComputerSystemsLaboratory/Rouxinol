#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, num;
    char op[10];
    list<int> lst;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", &op);
        scanf("%d", &num);

        switch (op[0] + op[6]) {
            case 'i':
                scanf("%d", &num);
                lst.push_front(num);
                break;
            case 'd':
                scanf("%d", &num);
                for (auto itr = lst.begin(); itr != lst.end(); itr++) {
                    if (*itr == num) {
                        lst.erase(itr);
                        break;
                    }
                }
                break;
            case 'd' + 'F':
                lst.pop_front();
                break;
            case 'd' + 'L' :
                lst.pop_back();
                break;
        }
    }

    auto itr = lst.begin();
    printf("%d", *(itr++));
    for (itr; itr != lst.end(); itr++) {
        printf(" %d", *itr);
    }
    printf("\n");
}