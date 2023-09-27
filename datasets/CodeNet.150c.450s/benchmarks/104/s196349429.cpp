#include <iostream>

using namespace std;

#define MAX_N (30)

void swap(int *a, int *b)
{
    int tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int w;  // 縦線
    int n;  // 横線
    int a, b;
    char c;
    int amida[MAX_N];
    
    cin >> w;
    for (int i = 0; i < w; i++){
        amida[i] = i + 1;
    }
    
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> c >> b;
        swap(&amida[a - 1], &amida[b - 1]);
    }
    
    for (int i = 0; i < w; i++){
        cout << amida[i] << endl;
    }
}