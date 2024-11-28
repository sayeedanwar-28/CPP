#include <iostream>
using namespace std;
int main(){
    int i, j;
    int n=5;
    int num=1;
    for (i=0;i<n;i++){
        for (j=1;j<i+1;j++){
            cout << num << " ";
            num ++;
        }
        cout << endl;
    }
return 0;
}
