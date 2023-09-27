#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<string>
#include<utility>
#include<algorithm>
#include<stack>
#include<queue>

#define numof(array) (sizeof (array) / sizeof *(array))
using namespace std;

#define INF (1 << 29)
static const int dx[] = {1, 0, -1, 0};
static const int dy[] = {0, 1, 0, -1};

#define MAX_R 10
#define MAX_C 10000

int original_osenbei[MAX_R][MAX_C];
int osenbei[MAX_R][MAX_C];
int R;
int C;

void yoko_uragaeshi(int line)
{
    for (int i = 0; i < C; i++) {
        osenbei[line][i] = (osenbei[line][i] + 1) % 2;
    }

}

// void tate_uragaeshi(int line)
// {
//     for (int i = 0; i < R; i++) {
//         osenbei[i][line] = (osenbei[i][line] + 1) % 2;
//     }

// }

int tate_count(int line)//0をカウント
{
    int cnt = 0;
    for (int i = 0; i < R; i++) {
        if (osenbei[i][line] == 0) cnt++;
    }

    return cnt;
}

void print_senbei(int index)
{
    cout << endl <<"==========" << index << endl;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << osenbei[i][j];
    
        }
        cout << endl;
    }
}

void copy_osenbei(void)
{
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            osenbei[i][j] = original_osenbei[i][j];
        }
    }    


}

int uragaeshi(void)
{
    int max_num = 0;
    
    for (int i = 0; i < (1 << R); i++) {//2^R通り
        int osenbei_count = 0;
        copy_osenbei();
        for (int j = 0; j < R; j++) {
            if (i & (1 << j)) yoko_uragaeshi(j);        
        }

        
        int count_tmp = 0;
        for (int k = 0; k < C; k++) {
            count_tmp = tate_count(k);//ひっくり返す前の0の個数

            if (count_tmp * 2 < R) {
                osenbei_count += R -count_tmp;
            } else {
                osenbei_count += count_tmp;
            }
        }
        max_num = max(max_num, osenbei_count); 

    }

    return max_num;

}


int main(void)
{
    while (cin >> R >> C) {
        if (R == 0 && C == 0) break;
        
        for (int i = 0; i < MAX_R; i++) {
            for (int j = 0; j < MAX_C; j++) {
                original_osenbei[i][j] = 0;
            }
        }

        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                cin >> original_osenbei[i][j];
            }
        }

        cout << uragaeshi() << endl;
    }
        return 0;
}