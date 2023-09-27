/*AOJproblem #2006*/

#include<stdio.h>
#define NUM 2014 //入力文字数のmax

void print_message(const char* input)
{
    static const char button1[] = {'.', ',', '!', '?', ' '};
    static const char button2[] = {'a', 'b', 'c'};
    static const char button3[] = {'d', 'e', 'f'};
    static const char button4[] = {'g', 'h', 'i'};
    static const char button5[] = {'j', 'k', 'l'};
    static const char button6[] = {'m', 'n', 'o'};
    static const char button7[] = {'p', 'q', 'r', 's'};
    static const char button8[] = {'t', 'u', 'v'};
    static const char button9[] = {'w', 'x', 'y', 'z'};
    static const char* buttons[] = {button1, button2, button3, button4, button5, button6, button7, button8, button9};//各ボタンの先頭のポインタの配列
    static const int syuuki[] = {5, 3, 3, 3, 3, 3, 4, 3, 4};//それぞれのボタンを何回押すと一周するか


    int i = 0;
    while (1) {
        while (input[i] == '0') {
            ++i;
        }
        //i++;
        if (input[i] == '\0') break;
        
        char c = input[i];
        int count = 0;//何回連続して同じ文字を入力するか

        while (input[i + ++count] != '0'){//'0'が入力されるまでカウント
            //count++;
        }
        i += count;
        printf("%c", buttons[c - '1'][(count - 1) % (syuuki[c - '1'])]);
    }

    printf("\n");
}

int main(void)
{
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        char input_str[NUM + 1] = {0};
        scanf("%s", input_str);
        print_message(input_str);
    }

	return 0;
}