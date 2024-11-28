#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    // int start=0, end=size-1;
    int sum=0, pro=1;
    cout << "Enter the element of the array" << endl ;
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Elements of the array: ";
    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i=0;i<size;i++){
        sum += arr[i];
        pro *= arr[i];
        if(i == size){
            break;
        }
    }
    cout << "Sum and Product of the elements are: "<<sum<<" "<<pro;
    return 0;
       
}