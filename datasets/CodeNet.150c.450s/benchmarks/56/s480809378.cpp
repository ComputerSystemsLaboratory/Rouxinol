#include<iostream>
using namespace std;

int main(){
 long int n,nom,min,max,total;
 min=0;
 max=0;
 total=0;
 cin>>n;
 for(int i=0;i<n;i++){
  cin>>nom;
  if(i==0){
    min=nom;
    max=nom;
    total=nom;
   }else{
    if(nom<min){
      min=nom;
    }
    if(nom>max){
      max=nom;
    }
    total+=nom;
   }
 }
 cout<<min<<' '<<max<<' '<<total<<'\n';
 return 0;
}