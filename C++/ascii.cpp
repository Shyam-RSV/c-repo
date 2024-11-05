    #include<iostream>
    using namespace std;
    int main(){
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 1 };

    int m = sizeof(arr1) /* sizeof(arr1[0])*/;
    int n = sizeof(arr2) / sizeof(arr2[0]);

    cout<< "M : " << m ;
    cout<< "N : " << n;
    }
