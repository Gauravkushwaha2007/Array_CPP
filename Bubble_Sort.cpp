#include <iostream>
using namespace std;

void sortArray(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]> arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
}

int main(){
    int arr[] = {3,4,2,1,5,6};
    int n = 6;
    sortArray(arr, n);
    display(arr, n);
return 0;
}
    
