#include <iostream>
using namespace std;

int sum(int num){
    int digitSum=0;

    while(num>0) {
        int lastDigit = num % 10;
        num = num/10;
        digitSum=digitSum+lastDigit;
    }
    return digitSum;
}
int main(){
    int num;
    cout << "Enter the number : " ;
    cin >> num;
    cout << "Sum of digits = " << sum(num) << endl; 
return 0;
}