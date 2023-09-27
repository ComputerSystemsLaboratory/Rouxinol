#include<cstdio>
#include<list>
#include<algorithm>

using namespace std;

list<int> myList;

int main()
{
    int n, num;
    char command[15];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", command);
        if ('i' == command[0]) {
            scanf("%d", &num);
            myList.push_front(num);
        }
        else if ('F' == command[6]) {
            myList.pop_front();
        }
        else if ('L' == command[6]) {
            myList.pop_back();
        }
        else {
            scanf("%d", &num);
            for (list<int>::iterator iter = myList.begin(); iter != myList.end(); iter++) {
                if (num == *iter) {
                    myList.erase(iter);
                    break;
                }
            }
        }
    }
    for (list<int>::iterator iter = myList.begin(); iter != myList.end(); iter++) {
        if (iter != myList.begin()) printf(" ");
        printf("%d", (*iter));
    }
    printf("\n");
    return 0;
}