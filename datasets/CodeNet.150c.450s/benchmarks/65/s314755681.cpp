#include <bits/stdc++.h>
using namespace std;

char C[36][3];
char Cb[36][3];
char Cs[36][3];
int Ib[36];
int Is[36];
int N;

bool is_stable(char c[][3], int ind[]){
    char num='1';
    for (int i=1; i<N; i++) {
        if (c[i][1] == num) {
            if (ind[i-1] > ind[i]) {
                return false;
            }
        }
        num = c[i][1];
    }
    return true;
}

void print_cards(char c[][3]){
    for (int i=0; i<N; i++) {
        printf("%s", c[i]);
        putchar(i<N-1 ? ' ' : '\n');
    }
}

int main()
{
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%s", C[i]);
        strcpy(Cb[i], C[i]);
        strcpy(Cs[i], C[i]);
        Ib[i] = Is[i] = i;
    }
    
    for (int i=0; i<N; i++) {
        for (int j=N-1; j>i; j--) {
            if (Cb[j-1][1] > Cb[j][1]) {
                char temp[3];
                strcpy(temp, Cb[j-1]);
                strcpy(Cb[j-1], Cb[j]);
                strcpy(Cb[j], temp);
                int tempi = Ib[j];
                Ib[j] = Ib[j-1];
                Ib[j-1] = tempi;
            }
        }
    }
    print_cards(Cb);
    puts(is_stable(Cb, Ib)?"Stable":"Not stable");
    
    for (int i=0; i<N; i++) {
        int minj = i;
        for (int j=i; j<N; j++) {
            if (Cs[j][1] < Cs[minj][1]) {
                minj = j;
            }
        }
        char temp[3];
        strcpy(temp, Cs[minj]);
        strcpy(Cs[minj], Cs[i]);
        strcpy(Cs[i], temp);
        int tempi = Is[minj];
        Is[minj] = Is[i];
        Is[i] = tempi;
    }
    print_cards(Cs);
    puts(is_stable(Cs, Is)?"Stable":"Not stable");
}