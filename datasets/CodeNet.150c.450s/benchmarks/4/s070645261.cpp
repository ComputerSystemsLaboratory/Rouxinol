#include<iostream>
using namespace std;
int main(){
int m,f,r;
for(int i=0; i<50; i++){
cin >> m >> f >> r;
if(m==-1 && f==-1 && r==-1)break;
if(m==-1 || f==-1) cout<< "F" <<endl;
else if(m+f>=80) cout << "A" <<endl;
else if(65<=m+f && m+f<80) cout << "B" <<endl;
else if(50<=m+f && m+f<65) cout << "C" <<endl;
else if(r>=50) cout << "C" <<endl;
else if(30<=m+f && m+f<50) cout << "D" <<endl;
else if(m+f<30) cout << "F" <<endl;
}
return 0;
}
