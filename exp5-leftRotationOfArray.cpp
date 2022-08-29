#include "iostream"
using namespace std;

void reverseArray(int arr[], int start, int end){
    for(int i = start, j = end - 1; i < end; i++, j--, end--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }


    int k;
    cin>>k;

    reverseArray(arr, 0, k);
    printArray(arr, n);

    reverseArray(arr, k, n);
    printArray(arr, n);

    reverseArray(arr, 0, n);
    printArray(arr, n);


    return 0;
}