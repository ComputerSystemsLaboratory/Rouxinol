#include<cstdio>;
//入出力を行う関数が使える//(scanf,printf)
#include<cctype>;

int main(){
    char ch;
    
    while(true){
        scanf("%c",&ch);
        if (isalpha(ch)){
            //chがアルファベットならtrueを返す//
            if(islower(ch)) printf("%c",toupper(ch));
            //chが小文字ならtrueを返す// //chの大文字を返す//
            else printf("%c", tolower(ch));
            //chの小文字を返す//
        } else printf("%c",ch);
        //アルファベット以外はそのまま出力//
        
        if (ch == '\n') break;
        //終端文字が現れたら終了//
    }
    return 0;
}
