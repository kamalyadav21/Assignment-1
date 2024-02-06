#include<iostream>
using namespace std;
int gcd(int m,int n){
    if (n==0){
        return m;
    }
    else{
        return gcd(n,m%n);
    }
}
int main(){
    // euclidian algo to find gcd
    int a,b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    if (a<0 || b<0){
        cout<<"Negative integers..\n";
        main();
        return 0;
    }
    cout<<"GCD is: "<<gcd(a,b);
    return 0;
}