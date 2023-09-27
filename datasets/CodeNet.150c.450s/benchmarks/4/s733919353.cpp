#include <iostream>
#include <queue>
using namespace std;

int main(){

    int m, f, r;
    queue<string> grade;

    while(1){
        cin >> m >> f >> r;
        if((m == -1) && (f ==-1) && (r == -1)){
            break;
        }
        else if((m == -1) || (f == -1) || (m+f < 30)){
            grade.push("F");
        }
        else if(m+f >= 80 ){
            grade.push("A");
        }
        else if((m+f >= 65) && (m+f < 80) ){
            grade.push("B");
        }
        else if((m+f >= 50) && (m+f < 65)){
            grade.push("C");
        }
        else if((m+f >= 30) && (m+f < 50)){

            if(r >= 50){
                grade.push("C");
            }else{
                grade.push("D");
            }
        }

    }
    int length = grade.size();
    for(int i=0; i<length; i++){
        cout << grade.front() << endl;
        grade.pop();
    }    


    return 0;
}