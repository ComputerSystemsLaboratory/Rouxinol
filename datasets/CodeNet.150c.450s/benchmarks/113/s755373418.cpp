#include <iostream>
#include <stdio.h>
#include<list>

using namespace std;
int main(){
    list<int> x;

    int temp;
    do{
        cin >> temp;

        if(temp != 0){
         x.push_back(temp);
        }
    }while(temp !=0);
    
    int i=1;
    for(std::list<int>::iterator itr = x.begin(); itr != x.end(); ++itr) {
        cout << "Case " << i << ": " << *itr << endl;
        i++;
    }
return 0;
}