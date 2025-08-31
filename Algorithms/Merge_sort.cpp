#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr,int start,int mid,int end){
    vector<int> temp;
    int i=start,j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=start;k<=end;k++){
        arr[k] = temp[k-start];
    }
}

void merge_sort(vector<int>& arr,int start,int end){
    if(start<end){
        int mid =start+(end-start)/2;
        merge_sort(arr,start,mid); //left part
        merge_sort(arr,mid+1,end); //right part

        merge(arr,start,mid,end);
    }

}


int main(){
    vector<int> arr ={15,9,31,10,3,7,24,18};
    int n = arr.size();
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}