#include<iostream>
#include<vector>
using namespace std;
void selection_sort(vector<int> & arr){
    int n = arr.size();
    for (int i=0;i<n-1;i++){
        // assume the minimum is the first element
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }

}
void printVector(vector<int> & arr){
    for(int i=0;i<arr.size();i++){
        cout<<" "<<arr[i];
    }
}

int main(){
    vector<int> arr ={60,20,50,10,40,30};
    selection_sort(arr);
    printVector(arr);
    return 0;
}