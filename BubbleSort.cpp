#include<iostream>
using namespace std;
int main () {
    int n, temp;
    cout << "Enter the Number of Elements of the Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Array Elements :\n";
    for (int i =0; i<n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n-i; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Array After Sorting :\n";
    for (int i =0; i<n; i++){
        cout << arr[i] << endl;
    }
    return 0;
}