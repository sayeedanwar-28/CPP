#include <iostream>
using namespace std;
int main(){    
    int i=2;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    bool isPrime = true;
    for (i=2; i <= n-1; i++){
        if(n % i == 0){
            isPrime=false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime number";
    }
    else{
        cout << "Non prime number";
    }
    
return 0;
}