#include<iostream>

#include<cctype>
using namespace std;

int main()
{
	string ch;
	int num[26]={},i;
	int test;

while(cin>>ch){
	for(i=0;i<ch.size();i++)
		if( isupper(ch[i])) ch[i] =  tolower(ch[i]);
 
	for(i=0;i<ch.size();i++){
		test = ch[i] - 'a';
		num[test]++;

		}

}

cout <<"a : " <<num[0] <<"\n";
cout <<"b : " <<num[1] <<"\n";
cout <<"c : " <<num[2] <<"\n";
cout <<"d : " <<num[3] <<"\n";
cout <<"e : " <<num[4] <<"\n";
cout <<"f : " <<num[5] <<"\n";
cout <<"g : " <<num[6] <<"\n";
cout <<"h : " <<num[7] <<"\n";
cout <<"i : " <<num[8] <<"\n";
cout <<"j : " <<num[9] <<"\n";
cout <<"k : " <<num[10] <<"\n";
cout <<"l : " <<num[11] <<"\n";
cout <<"m : " <<num[12] <<"\n";
cout <<"n : " <<num[13] <<"\n";
cout <<"o : " <<num[14] <<"\n";
cout <<"p : " <<num[15] <<"\n";
cout <<"q : " <<num[16] <<"\n";
cout <<"r : " <<num[17] <<"\n";
cout <<"s : " <<num[18] <<"\n";
cout <<"t : " <<num[19] <<"\n";
cout <<"u : " <<num[20] <<"\n";
cout <<"v : " <<num[21] <<"\n";
cout <<"w : " <<num[22] <<"\n";
cout <<"x : " <<num[23] <<"\n";
cout <<"y : " <<num[24] <<"\n";
cout <<"z : " <<num[25] <<"\n";
}