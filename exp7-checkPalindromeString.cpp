#include "iostream"
using namespace std;

int main() {

    string str;
    getline(cin, str);  //take input from the user including spaces

    string revStr = "";
    for(int i = str.size() - 1; i >= 0; i--){
        revStr += str[i];
    }

    // cout<<revStr<<endl;  //to check the reversed string

    if(revStr == str){
        cout<<"Yes it is a palindrome"<<endl;
    }
    else{
        cout<<"No it is not a palindrome"<<endl;
    }

    return 0;

    /*
        Time complexity = O(n)
        Space Complexity = O(1)
    */
}