#include <iostream>
using namespace std;
int main(){
    int i, j;
    int n=4;
    for(i=0;i<n;i++){
        char ch = 'A';
        for (j=0;j<n;j++){
            cout << ch <<" ";
            ch += 1; 
        }
        cout << endl;
    }
return 0;
}