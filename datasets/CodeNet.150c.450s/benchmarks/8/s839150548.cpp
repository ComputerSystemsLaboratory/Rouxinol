#include<iostream>
#include<cstring>
using namespace std;
int main(){
   string taro,hanako;
   int n,sam1=0,sam2=0;

   cin >> n;
   for(int i=0;i<n;i++){
	cin >> taro >> hanako;

	if(taro == hanako){
		sam1 += 1;
		sam2 += 1;
	}else if(taro > hanako){
		sam1 += 3;
	}else if(taro < hanako){
		sam2 += 3;
	}

   }

   cout << sam1 << " " << sam2 << endl;

   return 0;
}