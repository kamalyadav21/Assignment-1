#include<iostream>
using namespace std;
int main(){
    char str1[INT16_MAX];
    cin.get(str1,INT16_MAX);
    char str2[INT16_MAX];
    int len = 0;
    for(int i = 0;str1[i]!='\0';i++){
        len++;
    }
    cout<<"Length of the string is: "<<len<<endl;
    for(int i =0;i<len;i++){
        str2[i]=str1[len-i-1];
    }
    cout<<"Reversed: ";
    for(int j = 0;str2[j]!='\0';j++){
        cout<<str2[j];
    }
    cout<<endl;
    for(int i = 0;i<len/2;i++){
        if (str1[i]!=str2[i]){
            cout<<"Not a palindrome";
            return 0;
        }
    }
    cout<<"Palindrome";
    return 0;
}