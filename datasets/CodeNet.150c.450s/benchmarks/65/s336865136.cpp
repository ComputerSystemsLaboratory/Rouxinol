#include <iostream>

using namespace std;


struct CARD {char suit,  value;};

void babble(int n, CARD *pcard)
{
	for(int i=0;i<n;i++){
		for(int j=n-1;i<j;j--){
			if(pcard[j].value<pcard[j-1].value) swap(pcard[j],pcard[j-1]);
		}
	}
}

void selectsort(int n, CARD *pcard)
{
	int min;
	int minv;
	for(int i=0;i<n;i++){
		min=i;
		for(int j=i; j<n;j++){
			if(pcard[j].value<pcard[min].value) min=j;
		}
		swap(pcard[min],pcard[i]);
	}
}

void stable(CARD *in, CARD *out, int n)
{
	int flag=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int a=0;a<n;a++){
				for(int b=a+1;b<n;b++){
					if((in[i].value==in[j].value)&&(in[i].suit==out[b].suit)&&(in[j].suit==out[a].suit)&&(in[i].value==out[b].value)&&(in[j].value==out[a].value)){ 
						flag=1;
						break;
					}
				}
			}
		}
	}
	if(flag==1){ cout <<"Not stable"<<endl;}
	else cout <<"Stable"<<endl;
}

int main()
{

	CARD c1[100],c2[100];

	int n;
	int buff[200];
	cin>>n;
	for(int i=0;i<n;i++) cin>>c1[i].suit>>c1[i].value;
	for(int i=0;i<n;i++) c2[i]=c1[i];

	babble(n, c1);
	for(int j=0;j<n-1;j++) cout << c1[j].suit<<c1[j].value<<" ";
	cout << c1[n-1].suit<<c1[n-1].value<<endl;

	stable(c2,c1,n);
	for(int i=0;i<n;i++) c1[i]=c2[i];
	selectsort(n,c2);
	for(int j=0;j<n-1;j++) cout << c2[j].suit<<c2[j].value<<" ";
	cout << c2[n-1].suit<<c2[n-1].value<<endl;
	stable(c1,c2,n);


	return 0;
}

