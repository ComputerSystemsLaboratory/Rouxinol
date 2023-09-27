#include<iostream>
using namespace std;
char appreciation(int mid,int last,int re) {
    int sum = 0;
    if ((mid == -1) || (last == -1)) return 'F';
    sum = mid + last;
    if (sum >= 80) {
        return 'A';
    } else if (sum < 80 && sum >= 65) {
        return 'B';
    } else if (sum < 65 && sum >= 50) {
        return 'C';
    } else if (sum < 50 && sum >= 30) {
        if(re >= 50) {
            return 'C';
        }
        return 'D';
    } else {
        return 'F';
    }
    
}
int main(){
    int m,f,r;
    char grade;
    
    
    while(1) {
        cin >> m >> f >> r;
        if ((m == -1) && (f == -1) && (r == -1)) break;
        grade = appreciation(m,f,r);   
        cout << grade << endl;
    }
    return 0;
}