#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;

int main() {

    int plane[6],planeup,planebef,n,i,j,random,box;

    for(i=0;i<6;i++){
        cin >> plane[i];
    }

    cin >> n;
    for(j=0;j<n;j++){
        cin >> planeup >> planebef;

        while(1){
            if(planeup == plane[0] && planebef == plane[1]){
                cout << plane[2] << endl;
                break;
            }
            random = rand() % 4 + 1;

             if(random == 1){
                 box=plane[0];
                 plane[0]=plane[4];
                 plane[4]=plane[5];
                 plane[5]=plane[1];
                 plane[1]=box;
             }
             else if(random == 2){
                 box=plane[0];
                 plane[0]=plane[1];
                 plane[1]=plane[5];
                 plane[5]=plane[4];
                 plane[4]=box;
             }
             else if(random == 3){
                 box=plane[0];
                 plane[0]=plane[2];
                 plane[2]=plane[5];
                 plane[5]=plane[3];
                 plane[3]=box;
             }
             else if(random == 4){
                 box=plane[0];
                 plane[0]=plane[3];
                 plane[3]=plane[5];
                 plane[5]=plane[2];
                 plane[2]=box;
             }
        }
        
    }
    return 0;
}