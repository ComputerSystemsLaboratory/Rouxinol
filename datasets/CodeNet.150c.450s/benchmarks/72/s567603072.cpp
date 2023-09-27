#include<cstdio>
using namespace std;
int main(){
char str;
while(scanf("%c",&str)!=EOF){
    if(str>='a' && str<='z'){
        str=str-32;
        printf("%c",str);
    }else if(str>='A'&& str<='Z'){
        str=str+32;
        printf("%c",str);
    }else{
        printf("%c",str);
    }
}

return 0;
}
