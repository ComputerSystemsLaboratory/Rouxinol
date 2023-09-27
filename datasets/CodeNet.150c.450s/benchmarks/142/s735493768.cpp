#include <iostream>
using namespace std;

int main(void)
{
    int N,K,i,j;
    cin >> N >> K;
    int scores[N];
    for (i = 0; i < N; i++){
        cin >> scores[i];
    }
    for (j = K; j < N; j++){
        if(scores[j-K]<scores[j])
            printf("Yes\n");
        else 
            printf("No\n");
    }

}