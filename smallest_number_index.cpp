#include<bits/stdc++.h>
using namespace std;
int main (){
    int size;
    cout << "Enter the size of the array: "<<endl;
    cin >> size;
    int arr[size];
    int smallest = INT_MAX;
    int smallestIndex = 0;
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
    for (int i=0;i<size;i++){
        smallest = min(arr[i], smallest);
        if(arr[i] == smallest){
            smallestIndex = i;
        }
        
    }
    cout << smallestIndex << endl;
    return 0;
}