#include <cstdio>
#include <vector>

using namespace std;

int n;
vector<int> A;

int main()
{
    scanf("%d", &n);
    A=vector<int>(n);
    vector<int> B(n); //, //C(10000+1, 0);
    int max=-1;
    for(auto &it : A){
        scanf("%d", &it);
        if(it>max){
            max=it;
        }
    }

    vector<int> C(max+1, 0);
    for(auto &it : A){
        C[it]++;
    }
    for(int i=1; i<=max; i++){
        C[i]+=C[i-1];
    }
    for(auto it=A.rbegin(); it!=A.rend(); it++){
        B[C[*it]-1]=*it;
        C[*it]--;
    }

    for(auto it=B.begin(); it!=B.end(); it++){
        if(it!=B.begin()){
            printf(" ");
        }
        printf("%d", *it);
    }
    printf("\n");
    return 0;
}