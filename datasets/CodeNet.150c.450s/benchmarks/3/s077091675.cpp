#include <iostream>
#include <string>
using namespace std;

static const int MAX_LENGTH = 1000;

void nreplace(char *input, int start, int end, char *target);
void nswap(char *input, int start, int end);
void nprint(char *input, int start, int end);

int main(void) {
    char *input = new char[MAX_LENGTH+1];
    char *target = new char[MAX_LENGTH+1];
    string command;
    int N, s, e;
    cin >> input;
    cin >> N;

    while(N-- > 0) {
        cin >> command >> s >> e;
        if(command == "replace") {
            cin >> target;
            nreplace(input, s, e, target);
        }
        if(command == "reverse") nswap(input, s, e);
        if(command == "print") nprint(input, s, e);
    }

    return 0;
}

void nreplace(char *input, int start, int end, char *target) {
    for(int i=start; i<=end; i++)
        input[i] = target[i-start];
}

void nswap(char *input, int start, int end) {
    char *st = input;
    char *ed = input;
    char tmp;

    for(int i=0; i<start; i++) st++;
    for(int i=0; i<end; i++) ed++;

    while(st < ed) {
        tmp = *st;
        *st++ = *ed;
        *ed-- = tmp;
    }
}

void nprint(char *input, int start, int end) {
    for(int i=start; i<=end; i++) cout << input[i];
    cout << endl;
}