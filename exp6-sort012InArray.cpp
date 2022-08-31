#include <iostream>
using namespace std;

void sort012(int arr[], int n) {
    //Write your code here
    int temp[3] = {0};
    for(int i = 0; i < n; i++){
        temp[arr[i]]++;
    }
    
    int index = 0;
    for(int i = 0; i < temp[0]; i++){
        arr[index] = 0;
        index++;
    }
    for(int i = 0; i < temp[1]; i++){
        arr[index] = 1;
        index++;
    }
    for(int i = 0; i < temp[2]; i++){
        arr[index] = 2;
        index++;
    }

}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}