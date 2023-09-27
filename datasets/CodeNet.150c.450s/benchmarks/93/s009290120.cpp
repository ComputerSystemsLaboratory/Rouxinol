// クイックソート
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

#define MAX_N 100000
//const int INFTY = 2147483647;

typedef struct card
{
    char picture;
    int number;
}CARD;

int partition(CARD A[], int p, int r);
void quickSort(CARD A[], int p, int r);

int main(void)
{

    int n;
    CARD st_card[MAX_N], st_card_copy[MAX_N];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> st_card[i].picture >> st_card[i].number;

        st_card_copy[i].picture = st_card[i].picture;
        st_card_copy[i].number = st_card[i].number;
    }

    quickSort(&st_card[0], 0, n - 1);

    int num_1, num_2;
    char stable[] = "Stable\n";
    char not_stable[] = "Not stable\n";
    char *str = &stable[0];

    // 安定なソートなのかを確認
    for(int i = 0; i < n; i++)
    {
        if( st_card[i].number == st_card[i + 1].number )
        {
            for(int j = 0; j < n; j++)
            {
                if( ( st_card[i].picture == st_card_copy[j].picture )
                    && ( st_card[i].number == st_card_copy[j].number ) )
                {
                    num_1 = j;
                }

                if( ( st_card[i + 1].picture == st_card_copy[j].picture )
                    && ( st_card[i + 1].number == st_card_copy[j].number ) )
                {
                    num_2 = j;
                }
            }

            if( num_1 > num_2 )
            {
                str = &not_stable[0];
                // 処理終了
                break;
            }
        }
    }

    printf("%s", str);

    for(int i = 0; i < n; i++)
    {
        printf("%c %d\n", st_card[i].picture, st_card[i].number);
    }

    return 0;
}

// クイックソートを実施する関数
// p : 範囲の先頭
// q : 範囲の最後尾
void quickSort(CARD A[], int p, int r)
{
    int q;

    if( p < r )
    {
        q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }

    return;
}

// パーティション ソート の実施
// A[r]を基準として, 小さい要素は左側, 大きい要素は右側に並ぶ
// p : 範囲の先頭
// q : 範囲の最後尾
int partition(CARD A[], int p, int r)
{
    int x = 0, i = 0;
    CARD tmp;

    x = A[r].number;
    i = p - 1;

    for(int j = p; j < r; j++)
    {
        if( A[j].number <= x )
        {
            i++;

            // A[i] と A[j]を交換
            tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
    }

    // A[i + 1] と A[r]を交換
    tmp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = tmp;

    return i + 1;
}

