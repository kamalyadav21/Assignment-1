# Assignment-1

#include<bits/stdc++.h>
using namespace std;

int comparisons = 0; // Global variable to count comparisons

void merge(int *arr,int l,int mid,int r){
    int an=mid-l+1;
    int bn=r-mid;
    int a[an],b[bn];
    for (int i=0;i<an;i++){
        a[i]=arr[l+i];
    }
    for (int j=0;j<bn;j++){
        b[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=l;
    while (i<an && j<bn){
        comparisons++; // Increment comparisons counter
        if (a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while (i<an){
        arr[k++]=a[i++];
    }
    while (j<bn){
        arr[k++]=b[j++];
    }
}

void mergesort(int *arr,int l,int r){
    if (l>=r){
        return;
    }
    int mid=l+(r-l)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
}

int main(){
    cout<<"Enter the no. of elements"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"Enter the element";
    int k;
    cin>>k;
    arr[i]=k;
    }
    
    cout<<endl;
    mergesort(arr,0,n-1);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << "\nNumber of comparisons: " << comparisons << endl; // Output number of comparisons
}






#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int swaps = 0; // Initialize the swap counter
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < n; i++){
        int number = arr[i];
        int j = i - 1;
        for (; j > -1 && (number < arr[j]); j--){
            arr[j + 1] = arr[j];
            swaps++; // Increment swap counter for each shift
        }
        if (j != i - 1){
            arr[j + 1] = number;
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\nNumber of swaps: " << swaps << endl; // Output number of swaps
}




