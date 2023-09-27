#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> S;

int partition(int p, int r)
{
    int x=S[r];
    int i=p-1;
    for(int j=p; j<r; j++){
        if(S[j]<=x){
            i++;
            swap(S[i], S[j]);
        }
    }
    swap(S[i+1], S[r]);
    return i+1;
}

int main()
{
    int n;
    scanf("%d", &n);
    S=vector<int>(n);
    for(auto &it : S){
        scanf("%d", &it);
    }
    int q=partition(0, n-1);
    int i=0;
    for(; i<q; i++){
        if(i!=0){
            printf(" ");
        }
        printf("%d", S[i]);
    }
    printf(" [%d]", S[i]);
    i++;
    for(; i<n; i++){
        printf(" %d", S[i]);
    }
    printf("\n");
    return 0;
}