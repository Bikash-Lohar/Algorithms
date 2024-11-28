#include<iostream>
using namespace std;
int main () {
    int n, max, min;
    cout << "Enter Number of Elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements :\n";
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    max = arr[0];
    min = arr[0];
    for (int i = 1; i<n; i++){
        if (max < arr[i]){
            max = arr[i];
        }
        if (min > arr[i]){
            min = arr[i];
        }
    }
    cout << "Largest Element : " << max << endl;
    cout << "Smallest Element : " << min << endl;
    return 0;
}