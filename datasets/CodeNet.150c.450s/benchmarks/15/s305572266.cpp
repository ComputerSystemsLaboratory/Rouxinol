#include <cstdio>

int main(int argc, char const *argv[]) {
    int n, q, target;
    int findCount = 0; // ???????????£?????°????????°
    int inputSequence[10000];

    scanf("%d", &n);
    for(int i=0 ; i<n ; i++){
        scanf("%d", &inputSequence[i]);
    }

    scanf("%d", &q);
    for(int i=0 ; i<q ; i++){
        scanf("%d", &target);
        for(int j=0 ; j<n ; j++){
            if(inputSequence[j] == target){
                findCount++;
                break;
            }
        }
    }

    printf("%d\n", findCount);
    return 0;
}