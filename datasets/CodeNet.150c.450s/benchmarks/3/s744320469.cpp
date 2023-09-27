#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 ***/

int main(){
    double pai=3.141592653589;
    int n,a,b;
    char c[1000],rc[1000],s[10];
    scanf("%s",&c);
    scanf("%d",&n);
    string w;
    for(int i=0;i<n;i++){
        scanf("%s",&s);
        w=s;
        if(w=="print"){
            scanf("%d %d",&a,&b);
            for(int i=a;i<=b;i++){
                printf("%c",c[i]);
            }
            printf("\n");
        }else if(w=="replace"){
            scanf("%d %d %s",&a,&b,&rc);
            int j=0;
            for(int i=a;i<=b;i++){
                c[i]=rc[j];
                j++;
            }
        }else{
            scanf("%d %d",&a,&b);
            int j=b;
            strcpy(rc,c);
            for(int i=a;i<=b;i++){
                c[i]=rc[j];
                j--;
            }
        }
    }
    return 0;
}