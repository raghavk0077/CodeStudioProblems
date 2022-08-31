//this program is for only lower cases inputs

#include "iostream"
using namespace std;

int main() {
    string str;
    cout<<"Enter the string: ";
    getline(cin, str);
    
    int arr[26] = {0};  //created for storing frequency of each character in string

    for(int i = 0; i < str.size(); i++){
        arr[str[i] - 'a']++;
    }

    int max = 0, ch;
    for(int i = 0; i < 26; i++){
        if(arr[i] > max){
            max = arr[i];
            ch = i;
        }
    }

    cout<<"Most occured character in string = "<<(char)(ch + 'a')<<endl;

    return 0;

    /*
        Time complexity = O(n)
        Space Complexity = O(1)
    */
}