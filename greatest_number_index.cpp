#include<bits/stdc++.h>
using namespace std;
int main(){
    int largest = INT_MIN;
    int largestIndex = 0 ;
    int size;
    cin >> size; 
    int arr[size];
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
    for(int i=0;i<size;i++){
        largest = max(arr[i], largest);
        if(arr[i] == largest){
            largestIndex = i;
        }
    }
    cout << largestIndex << endl;
    return 0;

    
}