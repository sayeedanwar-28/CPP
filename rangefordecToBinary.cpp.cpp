#include <iostream>
using namespace std;
int decToBinary(int decNum){
    if (decNum == 0) return 0;
    int ans = 0, pow = 1;
    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}
int main(){
    int n, m;
    cout << "Enter the lower limit: ";
    cin >> n;
    cout << "Enter the upper limit: ";
    cin >> m;
    for (int i=n; i<=m; i++){
        cout << decToBinary(i) << endl;
    }
return 0;
}