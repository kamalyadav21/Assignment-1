#include<iostream>
using namespace std;
int generateFibonacci(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        cout<<0;
        return 0;
    }
    else if (n==2){
        cout<<0<<endl<<1;
        return 0;
    }
    else{
        cout<<0<<endl<<1<<endl;
        int a = 0;
        int b = 1;
        int c;
    for(int i = 0;i<n-2;i++){
        c = a+b;
        cout<<c<<endl;
        a = b;
        b = c;
        
    }
    return 0;
}
}
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    generateFibonacci(n);
}