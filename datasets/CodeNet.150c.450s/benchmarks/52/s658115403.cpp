#include <iostream>

using namespace std;

typedef struct Stack {
        int array[100];
        int top;

        Stack()
                :top(0)
        {
                for (int i = 0; i < 100; i++) {
                        array[i] = 0;
                }
        }
} Stack;

int main()
{
        Stack stack;
        int car;

        while (cin >> car) {
                if (car) {
                        stack.array[stack.top++] = car;
                } else {
                        cout << stack.array[--stack.top] << endl;
                        stack.array[stack.top] = 0;
                }
        }

        return 0;
}