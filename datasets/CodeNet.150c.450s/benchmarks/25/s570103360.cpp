#include<iostream>

int main(void){
    char letter,ch;
    int count[26]={};
    while(std::cin>>letter){
         if(std::isalpha(letter)){
              ++count[std::tolower(letter)-'a'];
         }
    }
    for(int i=0;i<26;i++){
        ch='a'+i;
        std::cout<<ch<<" : "<<count[i]<<std::endl;
    }
    return 0;
}