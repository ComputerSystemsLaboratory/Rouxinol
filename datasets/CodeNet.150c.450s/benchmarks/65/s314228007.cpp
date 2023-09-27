#include <iostream>
#include <algorithm>
#include <string>


using namespace std;









int main(){
  string str[100],strb[100];
  int num,mini,hantei=1;
  
  cin >>num;

  for(int i=0;i<num;i++){
    cin >>str[i];
  }

  for(int i=0;i<num;i++){
    strb[i]=str[i];
  }

  

  
  //bubble sort
for(int i=0;i<num-1;i++){

  for(int j=num-1;j>i;j--){

    if((str[j]).substr(1,1)<(str[j-1]).substr(1,1)){
      swap(str[j],str[j-1]);
      
    }
    
  }
 }


//selection sort
 for(int i=0 ; i<num-1;i++){
    mini=i;
    for(int j=i+1;j<num;j++){//num-1
      
      if((strb[j]).substr(1,1)<(strb[mini]).substr(1,1)){ mini=j;
      }
    
    

    }
    if(mini!=i){
    swap(strb[i],strb[mini]);
    if((strb[i]).substr(0,1)==(strb[mini]).substr(0,1)){
      hantei =0;
    }
    
    }

  }
  




 
// (str[i]).substr(1,1)

//bubble
 for(int i=0;i<num;i++){

   if(i!=num-1){ cout << str[i]<<" ";
   }else{

     cout <<str[i]<<endl;
     
   }

   
 }

 cout<<"Stable"<<endl;
 
 //selection
 for(int i=0;i<num;i++){

   if(i!=num-1){ cout << strb[i]<<" ";
   }else{
     
     cout <<strb[i]<<endl;
     
   }

   
 }
 if(hantei==1){
   
  cout<<"Stable"<<endl;
 }else {

cout<<"Not stable"<<endl;

 }


  
  
  
  

  
  
  
  return 0;
}