#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int> & arr){
    int n =arr.size();
    bool swapped;
    for(int i=0;i<n-1;i++){
        swapped =false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped =true;
            }
        }

    }
}
void printVector(const vector<int>& arr) {
    for (int num : arr)
        cout << " " << num;
}



int main(){
    vector<int> arr = {15,2,4,19,20,12,10};
    bubble_sort(arr);
    printVector(arr);
    return 0;


}