#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    int arr[size];
    int start = 0;
    int end = size - 1;
    
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Before swapping array is " <<  endl;
    for (int i=0;i<size;i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    cout << "After swapping" ;
    while (start < end){
        swap(arr[start], arr[end]);
            start ++;
            end --;        
    }
    cout <<  endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}