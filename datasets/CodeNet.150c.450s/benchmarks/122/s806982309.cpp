#include<cstdio>
#include<vector>
#define LE(x) ((x)*2)
#define RI(x) ((x)*2+1)
#define PA(x) ((x)/2)
using namespace std;
vector<int> L;

/*void test(){
    printf("\n---------NOW TEST--------\n");
    for(int i=1;i<L.size();i++){
        printf("%d ", L[i]);
    }
    printf("\n----------------------%d\n", L.size());
}*/

void insert(int key){
    int flag = L.size();
    L.push_back(key);
    while(PA(flag) >= 1 && L[flag] > L[PA(flag)]) {
        int tempFlag = flag;
        flag = PA(flag);
        L[flag] ^= L[tempFlag];
        L[tempFlag] ^= L[flag];
        L[flag] ^= L[tempFlag];
    }
    //test();
}

void maxHeapify(int flag){
    int maxFlag = flag;
    int right = RI(flag);
    int left = LE(flag);
    if(left<L.size()&&L[left]>L[maxFlag]){
        maxFlag = left;
    }
    if(right<L.size()&&L[right]>L[maxFlag]){
        maxFlag = right;
    }
    if(maxFlag==flag){
        return;
    }else{
        L[flag] ^= L[maxFlag];
        L[maxFlag] ^= L[flag];
        L[flag] ^= L[maxFlag];
        maxHeapify(maxFlag);
    }
}

int extract(){
    L[0]=L[1];
    L[1]=L[L.size()-1];
    maxHeapify(1);
    L.pop_back();
    //test();
    return L[0];
}

int main(){
    char ope[10];
    L.push_back(999);//首尾占位
    scanf("%s", ope);
    while(ope[2]!='d'){
        if(ope[0]=='i'){
            int key;
            scanf("%d", &key);
            insert(key);
        }else{
            printf("%d\n", extract());
        }
        scanf("%s", ope);
    }

    return 0;
}

