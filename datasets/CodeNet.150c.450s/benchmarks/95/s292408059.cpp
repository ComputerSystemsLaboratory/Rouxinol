#include<iostream>
#include<fstream>
#include<string>

using namespace std;

ifstream fin;
ofstream fout;

int main(){
	fin.open("input.txt");
	fout.open("output.txt");

	bool left = false, right = false;//false??§???,true??§????????°

	int n;//input
	int count = 0;
	bool moveflag;
	bool pre,now;//true??§???,false??§???
	bool up, down;//true??§???,false??§???

	string s;
	string gomi;

	while (true){
		//?????????
	pre = false;
		left = right = false;
		count = 0;

		cin >> n;
		if (n == 0)break;
		getline(cin, gomi);//??????
		getline(cin,s);

		for (int i = 0; i < n; i++){//?¶????????????????
			now = false;
			moveflag = false;

			if (s[i * 3] == 'l' && s[i * 3 + 1] == 'u' && left == false)left = true; moveflag = true;
			if (s[i * 3] == 'l' && s[i * 3 + 1] == 'd' && left == true)left = false; moveflag = true; 
			if (s[i * 3] == 'r' && s[i * 3 + 1] == 'u' && right == false)right = true; moveflag = true;
			if (s[i * 3] == 'r' && s[i * 3 + 1] == 'd' && right == true)right = false; moveflag = true;


			if (left == right){
				//now = left == true ? true : false;

				if (left == true)now = true;
				else now = false;

				if (moveflag == true && pre == !now){
					pre = now;
					count++;
				}
			}
		}
		//fout << count;
		cout << count << endl;

	}

	return 0;
}