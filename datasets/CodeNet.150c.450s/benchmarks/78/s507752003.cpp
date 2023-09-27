//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1167&lang=jp

#include<iostream>
#include<fstream>

#define Max_Len 1000000

using namespace std;

int triCalc(int num){
	static int count[Max_Len];
	static int triangle[Max_Len];
	static bool f = true;
	if (f){//初期化
		for (int i = 0; i < Max_Len; i++)
			count[i] = triangle[i] = Max_Len;
		f = false;
	}
	int triNum;

	int i = 1;
	while (i * (i + 1) * (i + 2) / 6 <= num)i++;
	i--;
	triNum = i * (i + 1) * (i + 2) / 6;

	if (triNum == num)return 1;
	while (num / 5 < triNum){
		if (triangle[num - triNum] == Max_Len){
			if (count[num] > triCalc(num - triNum) + 1)
				count[num] = triCalc(num - triNum) + 1;
		}
		else if (count[num] > triangle[num - triNum] + 1)
			count[num] = triangle[num - triNum] + 1;

		i--;
		triNum = i * (i + 1) * (i + 2) / 6;
	}
	return triangle[num] = count[num];
}

int oddCalc(int num){
	static int count[Max_Len];
	static int triangle[Max_Len];
	static bool f = true;
	if (f){//初期化
		for (int i = 0; i < Max_Len; i++)
			count[i] = triangle[i] = Max_Len;
		f = false;
	}
	int triNum;

	int i = 1;
	while (i * (i + 1) * (i + 2) / 6 <= num)i++;
	i--;
	while ((i * (i + 1) * (i + 2) / 6 )% 2 == 0)i--;
	triNum = i * (i + 1) * (i + 2) / 6;

	if (triNum == num)return 1;
	while (i > 0){
		if (triangle[num - triNum] == Max_Len){
			if (count[num] > oddCalc(num - triNum) + 1)
				count[num] = oddCalc(num - triNum) + 1;
		}
		else if (count[num] > triangle[num - triNum] + 1)
			count[num] = triangle[num - triNum] + 1;

		i--;
		while ((i * (i + 1) * (i + 2) / 6) % 2 == 0)i--;
		triNum = i * (i + 1) * (i + 2) / 6;
	}
	return triangle[num] = count[num];
}

int main(){

	int n;

	while (true){
		cin >> n;
		if (n == 0)break;

		cout << triCalc(n) << " " << oddCalc(n) << endl;
	}

	return 0;
}