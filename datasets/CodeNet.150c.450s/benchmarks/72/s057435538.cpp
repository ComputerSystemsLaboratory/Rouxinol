#include <iostream>
#include<cstdio>
#include<cctype>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    char a[1300];
    cin.getline(a,sizeof(a));
    char c[strlen(a)];
    strcpy(c,a);
    

        
    
    for(int i=0;i<strlen(c);i++){
        
          if(islower(c[i])){
              putchar(toupper(c[i]));
          }else if(isupper(c[i])){
              putchar(tolower(c[i]));
          }/*else if(c[i]==','){
              cout<<",";
          }else if(c[i]=='.'){
              cout<<".";
          }else if(isspace(c)){
              cout<<" ";
          }*/else{
              cout<<c[i];
          }
          
       
            
        
    }

    cout<<endl;
}
