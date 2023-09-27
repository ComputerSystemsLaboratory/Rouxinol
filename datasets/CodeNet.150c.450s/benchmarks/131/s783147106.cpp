#include <iostream>

using namespace std;

void divide(char[],int,int);
int combine(char[],int);
void sort(char[],int,bool);
int power(int);

int main(void){
	int	in=-1,L,a[21];
	char	val[6];

GET:	cin >> in >> L;
	if(in!=0||L!=0){
		a[0]=in;
		for(int i=1;i<=20;i++){
			divide(val,L,in);
			sort(val,L,true);
			int lrg=combine(val,L);
			sort(val,L,false);
			in=(a[i]=lrg-combine(val,L));

			for(int j=0;j<i;j++)
				if(a[i]==a[j]){
					cout << j << " " << a[j]<< " "  << i-j << endl;
					goto GET;
				}
		}
	}

	return 0;
}

void divide(char val[],int L,int num){
	for(int i=0;i<L;i++){
		val[i]=num/power(L-i-1);
		num-=val[i]*power(L-i-1);
	}
}

int combine(char val[],int L){
	int num=0;
	for(int i=0;i<L;i++)
		num += val[i]*power(L-i-1);

	return num;
}

void sort(char val[],int L,bool down){
	for(int i=0;i<L-1;i++)
		for(int j=0;j<L-i-1;j++)
			if((down&&val[j]<val[j+1])||!down&&val[j]>val[j+1]){
				int tmp=val[j];
				val[j]=val[j+1];
				val[j+1]=tmp;
			}
}

int power(int n){
	int num=1;
	for(int i=0;i<n;i++)
		num*=10;

	return num;
}