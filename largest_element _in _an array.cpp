#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    int arr[size];
    int largest = INT_MIN;
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
    for (int i=0;i<size;i++){
        largest = max(arr[i], largest);
    }
    cout << largest << endl;
    return 0;
}