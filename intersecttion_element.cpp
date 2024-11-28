#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr1[size];
    int arr2[size];
    cout << "Enter the element of the array1: ";
    for (int i=0;i<size;i++){
        cin >> arr1[i];
    }
    cout << "Enter the element of the array2: ";
    for (int i=0;i<size;i++){
        cin >> arr2[i];
    }
    cout << "The element of the array1: ";
    for (int i=0;i<size;i++){
        cout << arr1[i] << " " ;
    }
    cout << endl;
    cout << "The element of the array2: ";
    for (int i=0;i<size;i++){
        cout << arr2[i] << " " ;
    }
    cout << endl;
    bool flag = false;
    cout << "The intersection element are: " ;
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            if (arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                flag = true;
                break;
            }
        }
    }
    if (!flag){
        cout << "No intersection found";
    }
    cout << endl;
    return 0;
}