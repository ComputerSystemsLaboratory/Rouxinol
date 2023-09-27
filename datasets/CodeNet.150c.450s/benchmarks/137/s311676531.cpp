/*
//alds1_4_c:Dictionary
//算法:开放地址法散列表
//Time: 2018/1/8 星期一
*/
#include<stdio.h>
#include<string.h>

const int M=1000003;
const int L=14;

char H[M][L];

//对于每个字符返回的定义值
int getChar(char ch){
    if(ch=='A') return 1;
    if(ch=='C') return 2;
    if(ch=='D') return 3;
    if(ch=='T') return 4;
    return 0;
}
//对于字符串返回的初始散列值
long long getKey(char str[]){
    long long len=strlen(str),sum=0,p=1;
    for(int i=0;i<len;++i){
        sum+=p*getChar(str[i]);
        //每次获取定义值后p*5,相当于转换成五进制,不会冲突
        p*=5;
    }
    return sum;
}

//开放式散列值计算式: h(k,i)=(h1(k)+i*h2(k))%M
int h1(int key){
    return key%M;
}
//为了保证不会递归冲突(即往下算结果始终相同),必须使h2(key)与M互素
//TLE最好的情况就是改这个函数= =
//目前可以AC的: 1+(key%(M-1))
//(1+key)%(M-1)
int h2(int key){
    return (1+key)%(M-1);
}

//查找
//-1表示找到
//h表示找到第一个可插入点
int find(char str[]){
    long long key=getKey(str),i,h;
    for(i=0;;++i){
        h=(h1(key)+i*h2(key))%M;
        if(strcmp(H[h],str)==0) return -1;
        else if(strlen(H[h])==0) return h;
    }
    return 0;
}

//插入
void insert(char str[]){
    int key=find(str);
    if(key!=-1) strcpy(H[key],str);
}

int main(){
    for(int i=0;i<M;++i) H[M][0]='\0';
    char str[L],com[L];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%s %s",com,str);

        if(com[0]=='i'){
            insert(str);
        }else{
            if(find(str)==-1)
                printf("yes\n");
            else
                printf("no\n");
        }
    }

    return 0;
}

