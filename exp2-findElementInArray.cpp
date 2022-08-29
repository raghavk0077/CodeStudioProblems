#include "iostream"
using namespace std;

int searchArray(int arr[], int n, int element){
    bool flag = false;
    int i;
    for(i = 0; i < n; i++){
        if(element == arr[i]){
            flag = true;
            break;
        }
    }
    if(flag == true){
        return i;
    }
    else{
        return -1;
    }
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];  //declaration of array

    cout<<"Enter the elements in array"<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    int element;
    cout<<"Enter the number you want to search in array: ";
    cin>>element;

    int index = searchArray(arr, size, element);
    if(index == -1){
        cout<<"Number Not Found in the Array"<<endl;
    }
    else{
        cout<<"Your number "<<element<<" is present in array at "<<index<<" index position";
    }

    return 0;
}