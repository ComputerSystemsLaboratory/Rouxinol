#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int w, n;
	int a, b;
	int data[30][2];
	int data2[30][2];
	int temp;
	int i, j, k;
	int out[30];
	
	cin >> w >> n;
	
	for(i = 0; i < n; i++){
		scanf("%d,%d",&a,&b);
		data[i][0] = a;
		data[i][1] = b;		
	}
	
	for(i = 1; i < w+1; i++){
		
		//¡Ì}ÌÔ
		temp = i;
		
		for(j = 0; j < n; j++){
			if(data[j][0] == temp){
				temp = data[j][1];
			}
			else if(data[j][1] == temp){
				temp = data[j][0];
			}
		}
		
	//	printf("%dÍ%dÖ\n",i,temp);
		out[temp] = i;
	}
	
	for(int i = 1; i < w+1; i++){
		cout << out[i] << endl;
	}
}