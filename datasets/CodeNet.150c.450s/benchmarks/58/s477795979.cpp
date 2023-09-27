#include<iostream>
#include<stdio.h>
using namespace std;
static const int MAX = 100;

void printStack(int exp[], int l)
{
    for (int i = 0; i < l; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", exp[i]);
    }
    printf("\n");
}

int main()
{
    int stack[MAX];
    for (int i = 0; i < MAX; i++) {
        stack[i] = 0;
    }

    int operand = 0;
    int head = 0;
    char c;
    while (scanf("%c", &c) != EOF) {
        // 文字が改行の場合 -> 終了
        if(c == '\n') {
            break;
        } 
        
        // 文字が空白の場合
        if (c == ' ') {
            // オペランド構成中の場合 -> スタックに追加
            if (operand > 0) {
                stack[head] = operand;
                head++;
                operand = 0;
            }
            continue;
        }
        
        // 文字が演算子以外の場合 -> オペランドを構成
        if (c != '+' && c != '-' && c != '*') {
            if (operand == 0) {
                operand = c - '0'; // atoi
            } else {
                operand *= 10; // 桁繰り上げ
                operand += c - '0'; // 下の桁に追加
            }
            continue;
        }

        // 文字が演算子の場合
        head--;
        int t1 = stack[head - 1];
        int t2 = stack[head];
            
        if (c == '+') {
            stack[head-1] = t1 + t2;
        } else if (c == '-') {
            stack[head-1] = t1 - t2;
        } else if (c == '*') {
            stack[head-1] = t1 * t2;
        }
        stack[head] = 0;
    }
    printf("%d\n", stack[head - 1]);
    
    return 0;
}

