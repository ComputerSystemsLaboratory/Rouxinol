#include<cstdio>
#include<cstring>

int main(){
    int n;
    
    scanf("%d", &n);
    
    int count[4][14];
    memset(count, 0, sizeof(count));
    
    int number;
    char ch;
    int ch_number;
    
    for(int i = 0; i < n; i++){
        scanf(" %c %d", &ch, &number);
        if(ch == 'S') ch_number = 0;
        if(ch == 'H') ch_number = 1;
        if(ch == 'C') ch_number = 2;
        if(ch == 'D') ch_number = 3;
        count[ch_number][number]++;
    }
    
    for(int i = 0 ; i < 4; i++){
        for(int j = 1; j <= 13; j++){
            if(count[i][j] != 1){
                if(i == 0) ch = 'S';
                if(i == 1) ch = 'H';
                if(i == 2) ch = 'C';
                if(i == 3) ch = 'D';
                printf("%c %d\n", ch, j);
            }
        }
    }
}