#include <iostream>
#include <algorithm>
using namespace std;
int p(int arr[], int s, int e) {
    int pivot = arr[s];
    int pivotIdx = s;
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] < pivot) {
            swap(arr[++pivotIdx], arr[i]);
        }
    }
    swap(arr[s], arr[pivotIdx]);
    return pivotIdx;
}
void quicksort(int arr[], int s, int e) {
    if (s >= e) return;
    int pivotIdx = p(arr, s, e);
    quicksort(arr, s, pivotIdx - 1);
    quicksort(arr, pivotIdx + 1, e);}
int main() {
    int arr[] = {3, 40, 2, 51, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int getMax(int arr[],int n){
    int max = arr[0];
    for(int i = 1;i<n;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
void countingsort(int arr[],int n,int exp){
    int output[n];
    // int m = getMax(arr,n);
    int count[10]={0};
    for(int i = 0;i<n;i++){
        count[(arr[i]/exp)%10]++;
    }
    for(int i = 1;i<10;i++){
        count[i]+=count[i-1];
    }
    for(int i = n-1;i>=0;i--){
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }
    for(int i = 0;i<n;i++){
        arr[i] = output[i];
    }

}
void radixsort(int arr[],int n){
    int m = getMax(arr,n);
    for(int exp = 1;m/exp>0;exp*=10){
        countingsort(arr,n,exp);
    }
}

int main()
{
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    radixsort(arr, n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<float> b){
    int key;
    for(int i = b.size()-1;i>=0;i--){
        key = b[i];
        int j = i-1;

        while(j>=0 && b[j]>key){
            b[j+1]=b[j];
            j--;
        }
        b[j+1]=key;
    }
}
void bucket_sort(float arr[],int n){
    vector<float> buckets[n];
    int bi;
    int j;
    for (int i = 0;i<n;i++){
        bi = arr[i]*n;
        buckets[bi].push_back(arr[i]);
    }
    for(int i = 0;i<n;i++){
        //cout<<"ye";

        insertion_sort(buckets[i]);
    }
    int k= 0;
    for(int i = 0;i<n;i++){
        j = buckets[i].size();
        for(int t = 0;t<j;t++){
            arr[k++] = buckets[i][t];
        }
    }
}
int main(){
    float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n = sizeof(arr)/sizeof(arr[0]);
    bucket_sort(arr,n);

    //cout<<"ye";

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}




