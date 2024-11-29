#include <iostream>
using namespace std;
int BinarySearch(int arr[], int low, int high, int key){
    if (low > high){
        return -1;
    }
    int mid = (low + high)/2;
    if (arr[mid] == key){
        return mid;
    } else if (arr[mid] > key){
        high = mid-1;
        return BinarySearch(arr, low, high, key);
    } else {
        low = mid+1;
        return BinarySearch(arr, low, high, key);
    }
}
int main () {
    int n;
    cout << "Enter the Array Size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Array Elements : \n";
    for (int i =0; i<n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i<n; i++){
        for (int j =i + 1; j<n; j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted Array : \n";
    for (int i = 0; i<n; i++){
        cout << arr[i] << endl;
    }
    int key;
    cout << "Enter Search Element : ";
    cin >> key;
    int low = 0, high = n-1;
    int index = BinarySearch(arr, low, high, key);
    if (index >= 0){
        cout << "Element found at index : " << index << endl;
    } else {
        cout << "Element not Found!" << endl;
    }
    return 0;
}