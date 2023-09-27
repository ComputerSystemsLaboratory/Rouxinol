#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    vector<int> A(N);
    for(auto it=A.begin(); it!=A.end(); it++){
        scanf("%d", &(*it));
    }

    auto print=[&A]{
        for(auto it=A.begin(); it!=A.end(); it++){
            if(it!=A.begin()){
                printf(" ");
            }
            printf("%d", *it);
        }
        printf("\n");
    };

    int cnt=0;
    for(int i=0; i<N; i++){
        int min_j=i;
        for(int j=i; j<N; j++){
            if(A[j]<A[min_j]){
                min_j=j;
            }
        }
        swap(A[i], A[min_j]);
        if(i!=min_j){
            cnt++;
        }
    }
    print();
    printf("%d\n", cnt);
    return 0;
}