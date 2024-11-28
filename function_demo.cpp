#include <iostream>
using namespace std;

int sum(int a, int b){ //parameter 
    int s= a + b ;
    return s;
}

int minNum(int a, int b){
    if (a<b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    cout << sum(10,5) << endl;
    cout << "Minimum number among the two: " << minNum(10, 3) << endl;
    return 0;
return 0;
}