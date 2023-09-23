#include<cstdio>

int a[10];

bool dfs(int ite,int l,int r){
    if(ite==10){
        return true;
    }else if(a[ite]>l&&dfs(ite+1,a[ite],r)){
        return true;
    }else if(a[ite]>r&&dfs(ite+1,l,a[ite])){
        return true;
    }else{
        return false;
    }
}

bool solve(){
    for(int i=0;i<10;i++){
        scanf("%d",a+i);
    }
    return dfs(0,0,0);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(solve()) printf("YES\n");
        else printf("NO\n");
    }
}