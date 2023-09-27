#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(void)
{
    long long hist[100][21];
    int n;
    int form[100];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &form[i]);
    }
    
    memset(hist, 0, sizeof(hist));
    
    hist[0][form[0]] = 1;
    for (int i = 1; i < n - 1; i++){
        for (int j = 0; j < 21; j++){
            if (hist[i - 1][j] > 0){
                if (j - form[i] >= 0 && j - form[i] <= 20) 
                    hist[i][j - form[i]] += hist[i - 1][j];
                if (j + form[i] >= 0 && j + form[i] <= 20)
                    hist[i][j + form[i]] += hist[i - 1][j];
            }
        }
    }
    
    cout << hist[n - 2][form[n - 1]] << endl;
    
    return (0);
}