#include"iostream"
using namespace std;

void inputArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
}

int addition(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n,m;
    cout<<"Size of first array: ";
    cin>>n;
    cout<<"Size of second array: ";
    cin>>m;

    int arr1[n], arr2[m], sum = 0;

    cout<<"enter elements in first array:"<<endl;
    inputArray(arr1,n);
    cout<<"enter elements in second array:"<<endl;
    inputArray(arr2,m);


    sum = addition(arr1, n) + addition(arr2, m);
    cout<<"Sum of all elements of both array = "<<sum<<endl;


    return 0;
}