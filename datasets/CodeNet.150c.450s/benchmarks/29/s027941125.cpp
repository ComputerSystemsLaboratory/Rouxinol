#include <stdio.h>
#include <string.h>

void deleteFirst(int**, int*);
void deleteLast(int**, int*);
void insertOne(int**, int**, int, int*);
void deleteOne(int**, int**, int, int*);

int main(void){
    int xs[2000002] = {};
    
    int* fp = &xs[2000000];
    int* lp = fp;
    int len = 0;
    int n;
    char str[20];
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d", &n);
    for(int i=0; i < n; ++i){
        fgets(str, sizeof(str), stdin);
        if(str[6] == 'F'){
            deleteFirst(&fp, &len);
        }else if(str[6] == 'L'){
            deleteLast(&lp, &len);
        }else{
            char *tp;
            int m;
            tp = strtok(str, " " );
            tp = strtok(NULL," ");
            sscanf(tp, "%d", &m);
            if(str[0] == 'i'){
                insertOne(&fp, &lp, m, &len);
            }else{
                deleteOne(&fp, &lp, m, &len);
            }
        }
        
        if(len == 0){
            fp = &xs[2000000];
            lp = fp;
        }
    }
    
    for(int i = 0; i < lp - fp; ++i){
        if(*(fp + i) != -1){
            printf("%d ", *(fp + i));
        }
    }
    printf("%d\n", *lp);
}

void deleteFirst(int** fp, int *len){
    **fp = -1;
    --*len;
    while(**fp == -1) ++*fp;
}

void deleteLast(int** lp, int* len){
    **lp = -1;
    --*len;
    while(**lp == -1) --*lp;
}

void insertOne(int** fp, int** lp, int m, int* len){
    if(*len == 0){
        **fp = m;
    }else{
        --*fp;
        **fp = m;
    }
    ++*len;
}

void deleteOne(int** fp, int** lp, int m, int* len){
    for(int j = 0; j <= *lp - *fp; ++j){
        if(*(*fp + j) == m){
            *(*fp + j) = -1;
            --*len;
            if(j == 0){
                while(**fp == -1) ++*fp;
            }else if((*fp + j) == *lp){
                while(**lp == -1) --*lp;
            }
            break;
        }
    }
}