#include<bits/stdc++.h>
using namespace std;
int main(){
    // int size;
    // cout << "Enter the size of the array: ";
    // cin >> size;
    // int num[size];
    // int smallest = INT_MAX;
    // for(int i=0;i<size;i++){
    //     cin >> num[i];
    // }
    
    // for(int i=0;i<size;i++){
    //     // if (num[i] < smallest){
    //     //     smallest = num[i];
    //     // }
    //     smallest = min(num[i], smallest);
    // }
    // cout << "The smallest element are: " << smallest << endl;
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int num[size];
    int largest = INT_MIN;
    for(int i=0;i<size;i++){
        cin >> num[i];
    }
    
    for(int i=0;i<size;i++){
        // if (num[i] > largest){
        //     largest = num[i];
        // }
        largest = max(num[i], largest);
    }
    cout << "The smallest element are: " << largest << endl;
return 0;
}