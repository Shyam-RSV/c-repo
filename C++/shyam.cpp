#include <iostream>
using namespace std;

int sumArray(int arr[], int n){
    int sum;
    for (int j = 0; j < n ; j++){
    for (int i = 0; i < n; i++){
        if(arr[i] == arr[j]){

        }
    }
    }
}

int main(){
    int n = 7;
    int arr1[n];
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    int result;
    result = sumArray(arr1, n);
    cout << result << endl;
    return 0;

}