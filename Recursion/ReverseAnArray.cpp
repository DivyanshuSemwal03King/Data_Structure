#include<iostream>
#include<vector>
using namespace std;

//  void reverse(int i, vector <int> & arr, int n){
//     if(i==n/2) return ;
//     int temp = arr[i];
//     arr[i]=arr[n-i-1];
//     arr[n-i-1]=temp;
//     reverse(i+1,arr,n);
        
// }
void reverseArray(vector<int>& arr,int left,int right){
  
    if(left >= right) 
        return;

    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    reverseArray(arr,left+1,right-1);
}

int main(){
    //     vector<int> arr = {1,2,3,4,5};
    // int n = arr.size();

    // reverse(0, arr, n);

    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }

     vector<int> arr = {1, 2, 3, 4, 5};

    reverseArray(arr, 0, arr.size() - 1);

    for (int x : arr)
        cout << x << " ";

    return 0;
}