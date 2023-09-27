#include <stdio.h>
#include <string.h>

void deleteFirst(int**);
void deleteLast(int**);
void insertOne(int**, int**, int, int);
bool deleteOne(int**, int**, int);

int main(void){
    int xs[2000001] = {};
    int* default_ptr = xs + 2000000;
    int* fp = default_ptr;
    int* lp = default_ptr;
    int len = 0;
    int n;
    char str[20];
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d", &n);
    for(int i=0; i < n; ++i){
        fgets(str, sizeof(str), stdin);
        if(str[6] == 'F'){
            deleteFirst(&fp);
            --len;
        }else if(str[6] == 'L'){
            deleteLast(&lp);
            --len;
        }else{
            char *tp;
            int m;
            tp = strtok(str, " " );
            tp = strtok(NULL," ");
            sscanf(tp, "%d", &m);
            if(str[0] == 'i'){
                insertOne(&fp, &lp, m, len);
                ++len;
            }else if(deleteOne(&fp, &lp, m)){
                --len;
            }
        }
        
        if(len == 0){
            fp = default_ptr;
            lp = default_ptr;
        }
    }
    
    for(int i = 0; i < lp - fp; ++i){
        if(*(fp + i) != -1){
            printf("%d ", *(fp + i));
        }
    }
    printf("%d\n", *lp);
}

void deleteFirst(int** fp){
    **fp = -1;
    while(**fp == -1) ++*fp;
}

void deleteLast(int** lp){
    **lp = -1;
    while(**lp == -1) --*lp;
}

void insertOne(int** fp, int** lp, int m, int len){
    if(len == 0){
        **fp = m;
    }else{
        --*fp;
        **fp = m;
    }
}

bool deleteOne(int** fp, int** lp, int m){
    for(int j = 0; j <= *lp - *fp; ++j){
        if(*(*fp + j) == m){
            *(*fp + j) = -1;
            if(j == 0){
                while(**fp == -1) ++*fp;
            }else if((*fp + j) == *lp){
                while(**lp == -1) --*lp;
            }
            return true;
        }
    }
    return false;
}