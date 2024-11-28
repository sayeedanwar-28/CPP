#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int reverseVector(vector<int>& vec){
    int n = vec.size();
    for (int i=0;i<n/2;i++){
        swap(vec[i], vec[n-i-1]);
    }
}

int main(){
    int size;
    cin >> size;
    vector<int> vec(size);
    for (int i=0;i<size;i++){
        cin >> vec[i] ;
    }
     reverseVector(vec);

     for (int i=0;i<size;i++){
        cout << vec[i] << endl;
     }
    return 0;

}
