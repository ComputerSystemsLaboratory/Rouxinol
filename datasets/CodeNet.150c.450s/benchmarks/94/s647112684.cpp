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

    bool flag=true;
    int cnt=0;
    while(flag){
        flag=false;
        for(int j=N-1; j; j--){
            if(A[j]<A[j-1]){
                swap(A[j], A[j-1]);
                flag=true;
                cnt++;
            }
        }
    }
    print();
    printf("%d\n", cnt);
    return 0;
}