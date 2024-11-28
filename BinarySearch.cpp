#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter Number of Elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements :\n";
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    for (int i = 1; i<n; i++){
        for (int j = i-1; j>=0; j--){
            if (arr[j+1] < arr[j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int key;
    cout << "Enter the Search Element : ";
    cin >> key;
    int low = 0, high = n-1, mid = (low + high)/2, flag = 0;
    while (low <= high){
        if (key == arr[mid]){
            flag = 1;
            break;
        } else if (key > arr[mid]){
            low = mid + 1;
            mid = (low + high)/2;
        } else {
            high = mid - 1;
            mid = (low + high)/2;
        }
    }
    if (flag){
        cout << "Element found at index : " << mid << endl;
    } else {
        cout << "Element not Found!" << endl;
    }
    return 0;
}