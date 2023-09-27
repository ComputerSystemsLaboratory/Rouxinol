#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int pos, key;
int queue[2000000];
char command[8];

void insert_key(int val) {
    int i = pos++;
    while (i > 0) {
        int p = (i - 1) / 2;
        if (queue[p] >= val) { break; }
        queue[i] = queue[p];
        i = p;
    }
    queue[i] = val;
}

int extract_key() {

    int result = queue[0];

    int val = queue[--pos], i = 0;
    for (int left, right; i * 2 + 1 < pos; ) {
        left = i * 2 + 1, right = i * 2 + 2;
        if (right < pos && queue[right] > queue[left]) {
            left = right;
        }
        if (queue[left] <= val) {
            break;
        }
        queue[i] = queue[left];
        i = left;
    }
    queue[i] = val;
    return result;
}

int main(void) {

    while (true) {
        scanf("%s", command);
        if (command[0] == 'i') {
            scanf("%d", &key);
            insert_key(key);
        }
        else if (command[1] == 'x') {
            printf("%d\n", extract_key());
        }
        else {
            break;
        }
    }
    return 0;
}