#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

typedef struct{
    char symbol;
    int number;
} TRUMP;

void bubble_sort(TRUMP *x, int n){
    bool swap_flag = true;
    for(int j=0 ; swap_flag ; j++){
        swap_flag = false;
        for(int i=n-1 ; i>j ; i--){
            if(x[i-1].number > x[i].number){
                swap(x[i-1], x[i]);
                swap_flag = true;
            }
        }
    }
}

// begin??¨end?????????a?????????b??????????????????????????????
bool search_number(TRUMP *x, int begin, int end, int a, int b){
    for(int i=begin+1 ; i<end ; i++){
        if((x[i].number == a) || (x[i].number == b)) return false;
    }
    return true;
}

bool selection_sort(TRUMP *x, int n){
    int min;
    bool stable_flag = true;
    for(int i=0 ; i<n-1 ; i++){
        min = i;
        for(int j=i+1 ; j<n ; j++){
            if(x[j].number < x[min].number) min = j;
        }
        // ???????????????????°??????§????????°???????????????
        if(min != i){
            // ??????????????????????????????????????????
            if(stable_flag){
                stable_flag = search_number(x, i, min, x[i].number, x[min].number);
            }
            swap(x[i], x[min]);
        }
    }
    return stable_flag;
}

int main(int argc, char const *argv[]) {
    int n;
    char tmp[3]; // ???????????????????????¨
    bool stable_flag;
    TRUMP x_b[36], x_s[36];

    // ????´???°??¨??°????????\???
    scanf("%d", &n);
    for(int i=0 ; i<n ; i++){
        scanf("%s", tmp);
        x_b[i].symbol = tmp[0];
        x_b[i].number = (int)(tmp[1] - '0');
    }
    memcpy(x_s, x_b, sizeof(x_b));

    // ??????????????????
    bubble_sort(x_b, n);
    for(int i=0 ; i<n-1 ; i++){
        printf("%c%d ", x_b[i].symbol, x_b[i].number);
    }
    printf("%c%d\n", x_b[n-1].symbol, x_b[n-1].number);
    printf("Stable\n");

    // ???????????????
    stable_flag = selection_sort(x_s, n);
    for(int i=0 ; i<n-1 ; i++){
        printf("%c%d ", x_s[i].symbol, x_s[i].number);
    }
    printf("%c%d\n", x_s[n-1].symbol, x_s[n-1].number);
    if(stable_flag) printf("Stable\n");
    else printf("Not stable\n");

    return 0;
}