#include<iostream>
using namespace std;

void descending()
{
    int mountain;
    int count[10];
    
    for(int i=0; i<10; i++)
    {
        cin>>mountain;
        count[i]= mountain;
    }
    
     for (int i=0; i<9; i++)    
    {
          for(int j=(i+1); j<10; j++)   
         {
                if (count[i] < count[j])          
               {
                        int temp = count[i];          //swap
                        count[i] = count[j];
                        count[j] = temp;
               }
          }
     }
    
    for(int i=0; i<3; i++)
    {
        cout<<count[i]<<endl;
    }
    
    return;
}


int main(){

    descending();
    return 0;
}