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
    print();

    for(int i=1; i<N; i++){
        int v=A[i];
        int j=i-1;
        while(j>=0 && A[j]>v){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=v;
        print();
    }
    return 0;
}