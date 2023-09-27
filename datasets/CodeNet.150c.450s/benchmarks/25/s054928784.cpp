#include <iostream>
#include <stdio.h>
 
int main(){
    char ch;
    int num,list[30]={0};
    //for (int ga=0;ga<15;ga++){
        while(scanf("%c",&ch) != EOF ){
        //while(std::cin>>ch){
        //scanf("%c",&ch);
        if(isupper(ch)){
        	ch=tolower(ch);
        }
        num=ch-'a';
        list[num]=list[num]+1;
    }
    for (int gb=0;gb<=('Z'-'A');gb++){
        char tesa='a'+gb;
        std::cout << tesa<< " : " << list[gb] << std::endl;
    }
    return 0;
}