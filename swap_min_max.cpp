#include<bits/stdc++.h>
using namespace  std;
int main (){
    int size;
    cout << "Enter the size of the array: "; //size of the array
    cin >> size;
    int arr[size];
    int smallest =  arr[0];
    int largest = arr[0];
    cout << "Enter element in the array are: "; //entering the element
    for (int i = 0;i<size;i++){
        cin >> arr[i];
    }
    cout << "The element in the array are: "; // displaying the element in the array
    for (int i =0;i<size;i++){
        cout << arr[i] << " "; 
    }
    cout << endl; // creating a line gap.
    for (int i =0;i<size;i++){
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }
    cout << "Before the swapping the elements: " << " "<<largest << " "<< smallest << endl;

    for (int i=0;i<size;i++){ //swapping the largest and smallest element
        if (arr[i] == largest){
            arr[i] = smallest;
        }
        else if (arr[i] == smallest){
            arr[i] = largest;
        }
    }

    cout << "After Swapping the element: ";
    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
