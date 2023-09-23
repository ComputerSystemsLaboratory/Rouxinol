#include<iostream>

using namespace std;

int time3(int x);

int main(){

int x;

cin >> x;

cout << time3(x) << endl;

}

int time3(int x){
return x*x*x;
}