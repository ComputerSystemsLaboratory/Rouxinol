#include<iostream>
using namespace std;
int main()
{
int a1,b1,c1,d1,a2,b2,c2,d2,T1,T2,T;
cin >> a1 >> b1 >> c1 >> d1;
cin >> a2 >> b2 >> c2 >> d2;
if(a1>100){
        cout << "エラー" << endl;
        return 0;
}
if(b1>100){
        cout << "エラー" << endl;
        return 0;
}
if(c1>100){
        cout << "エラー" << endl;
        return 0;
}
if(d1>100){
        cout << "エラー" << endl;
        return 0;
}
if(a2>100){
        cout << "エラー" << endl;
        return 0;
}
if(b2>100){
        cout << "エラー" << endl;
        return 0;
}
if(c2>100){
        cout << "エラー" << endl;
        return 0;
}
if(d2>100){
        cout << "エラー" << endl;
        return 0;
}

T1=a1+b1+c1+d1;
//cout << T1 << endl;
T2=a2+b2+c2+d2;
//cout << T2 << endl;
if(T1>T2){
        T=T1;
	//cout << "T1" << endl;
}
if(T2>T1){
        T=T2;
	//cout << "T2" << endl;
}
if(T1==T2){
        T=T1=T2;
	//cout << "T1=T2" << endl;
}
cout << T << endl;
return 0;
}