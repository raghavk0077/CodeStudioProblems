#include "iostream"
using namespace std;


int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];  //declaration of array

    cout<<"Enter the elements in array"<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    //to find the max and min elements of array
    int max = INT32_MIN, min = INT32_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] >= max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout<<"\nMax Element = "<<max<<"\n"<<"Min Element = "<<min<<endl;


    return 0;
}