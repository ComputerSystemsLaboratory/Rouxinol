#include<stdio.h>
#include<string.h>
#define k 1046527
char a[100];
char b[100];
char H[k][14];
int zhengshu(char a){
if(a=='A')return 1;
else if(a=='C')return 2;
else if(a=='G')return 3;
else if(a=='T')return 4;
else return 0;
}
long long zhuanhuan(char b[]){
long long sum=0;
long long p=1,i;
for(int i=0;i<strlen(b);i++){
 sum+=p*(zhengshu(b[i]));
 p=p*5;
}
return sum;
}
int s1(int key){return key%k;}
int s2(int key){return 1+(key%(k-1));}
int chazhao(char b[]){
long long key,i,h;
key=zhuanhuan(b);
for(int i=0;;i++){
    h=(s1(key)+i*s2(key))%k;
    if(strcmp(H[h],b)==0)return 1;
    else if(strlen(H[h])==0)return 0;
}
return 0;
}
int insert(char b[]){
long long key,i,h;
key=zhuanhuan(b);
for(int i=0;;i++){
    h=(s1(key)+i*s2(key))%k;
    if(strcmp(H[h],b)==0)return 1;
    else if(strlen(H[h])==0){
        strcpy(H[h],b);
        return 0;
    }
}
return 0;
}
int main(){
int n;
for(int i=0;i<k;i++){
    H[i][0]='\0';
}
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%s %s",a,b);
    if(a[0]=='i'){
        insert(b);
    }
else {
    if(chazhao(b)){
        printf("yes\n");
    }
    else printf("no\n");
}
}
return 0;
}