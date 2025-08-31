#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr =arr[i];
        int prev =i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }

}

void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {5,2,9,1,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, n);
    print_array(arr,n);
}