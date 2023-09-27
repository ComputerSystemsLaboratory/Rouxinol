#include<cstdio>
#include<cctype>

int main(){
    char ch;
    int counter[26]={};
    
    while(scanf("%c",&ch) !=EOF){
        if(isalpha(ch)){
            if(isupper(ch)){
                ch = tolower(ch);
            }
        int num = ch -'a';
        counter[num]++;
        }
    }
    for(int i =0;i<26;i++){
        printf ("%c : %d\n",i+'a', counter[i]) ;
    }
    return 0;
}
