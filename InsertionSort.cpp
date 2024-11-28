#include <iostream>
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
    for (int i = 1; i<n; i++){
        for (int j = i-1; j>=0; j--){
            if (arr[j+1] < arr[j]){
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