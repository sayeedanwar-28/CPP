#include<bits/stdc++.h>
using namespace std;

bool Palindrome(int n){
    int reverse = 0;
    int temp = n;
    while (temp != 0){
        reverse = (reverse*10) + (temp % 10);
        temp = temp/10;
    }
    return (reverse == n);
}

int main (){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (Palindrome(n) == 1){
        cout << "Palindrome number" << endl;
    }
    else {
        cout <<  "Not a palindrome";
    }
    return 0;
}