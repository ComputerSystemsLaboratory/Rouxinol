#include <cstdio>

struct Card
{
  char suit;
  char value;
  Card() : suit(0), value(0) {}
  Card(char s, char v) : suit(s), value(v) {}
};

Card C1[101], C2[101], C3[101];

void swap(Card *A, int i, int j)
{
    Card t = A[i];
    A[i] = A[j];
    A[j] = t;
}

int selection_sort(Card *A, int N)
{
    int swap_count = 0;
    for (int i = 0; i < N; ++i)
    {
        int mini = i;
        for (int j = i; j < N; ++j)
            if (A[j].value < A[mini].value)
                mini = j;
        if (i != mini) {
            swap(A, i, mini);
            swap_count++;
        }
    }
    return swap_count;
}

int bubble_sort(Card *A, int N)
{
    int swap_count = 0;
    for (int i = 0; i < N; ++i)
        for (int j = N-1; j > i; --j)
            if (A[j].value < A[j-1].value) {
                swap(A, j, j-1);
                swap_count++;
            }
    return swap_count;
}

int find(Card c, Card *A, int N)
{
    for (int i = 0; i < N; ++i)
        if (A[i].suit == c.suit && A[i].value == c.value)
            return i;
    return -1;
}

bool is_stable(Card *A, Card *sorted_A, int N)
{
    int last_value = 0;
    int last_ix = -1;
    for (int i = 0; i < N; ++i)
    {
        int ix = find(sorted_A[i], A, N);
        if (last_value == sorted_A[i].value)
        {
            if (last_ix >= ix)
                return false;
        }
        last_value = sorted_A[i].value;
        last_ix = ix;
    }
    return true;
}

void print_r(Card *A, int N)
{
    for (int i = 0; i < N; ++i)
    {
        if (i > 0) putchar(' ');
        printf("%c%c", A[i].suit, A[i].value);
    }
    putchar('\n');
}

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d\n", &N);
    for (int i = 0; i <= N; i++ ) {
        scanf("%c%c ", &C1[i].suit, &C1[i].value);
        C2[i] = C1[i];
        C3[i] = C1[i];
    }

    bubble_sort(C1, N);
    print_r(C1, N);
    printf("%s\n", is_stable(C3, C1, N) ? "Stable" : "Not stable");

    selection_sort(C2, N);
    print_r(C2, N);
    printf("%s\n", is_stable(C3, C2, N) ? "Stable" : "Not stable");

    return 0;
}