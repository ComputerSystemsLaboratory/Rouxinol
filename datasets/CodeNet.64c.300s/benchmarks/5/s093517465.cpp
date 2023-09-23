#include <iostream>
using namespace std;
int main(){
	int mount[10];
	for(int num=0;num<10;num++){
	 // cout << "Mount"<<num << endl;
	  cin >> mount[num];
    }
    for(int i=0;i<10;i++){
     for(int j=i+1;j<10;j++){
	  if(mount[i]<mount[j]){
	 	 int sub=mount[j];
	 	 mount[j]=mount[i];
	 	 mount[i]=sub;
	   }
     }
    }
   cout << mount[0] << endl;
   cout << mount[1] << endl;
   cout << mount[2] << endl;
  return 0;
}