#include<iostream>
using namespace std;
struct card{
	char type;
	int rank;
	int flag;//1--given, 0---no given
} A[52];
char FindType(int i)
{
	switch (i){
		case 0:return 'S';
		case 1:return 'H';
		case 2:return  'C';
		case 3:return 'D';
		default :cout<<"Input Error";
	}
}

int TypeToNum(char type)
{
	switch (type){
		case 'S':return 0;
		case 'H':return 1;
		case 'C':return 2 ;
		case 'D':return 3;
		default :cout<<"Input Error";
				 return -1;
	}	
}

int FindPos(char type,int rank)
{
	return TypeToNum(type)*13+rank-1;
}
int main()
{
	int k,n;
	int pos;
	int rank;
	char type;
	k=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<13;j++){
			A[k].flag=0;
			A[k].rank=j+1;
			A[k].type=FindType(i);
			k++;
		}
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>type>>rank;
		pos=FindPos(type,rank);
		A[pos].flag=1;
	}
	for(int i=0;i<52;i++){
		if (A[i].flag==0)
			cout<<A[i].type<<" "<<A[i].rank<<endl;
	}
	
	return 0;
}
