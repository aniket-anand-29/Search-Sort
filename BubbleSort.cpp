#include<iostream>
using namespace std;
void merge(int arr[], int si, int ei, int mid){
    //Computing the size of two temp arrays
    int n1 = mid - si + 1;
    int n2 = ei - mid;
    //Two temp arrays
    int a[n1];
    int b[n2];
    
    //Copy first half into temp array 'a'
    for(int i = 0; i < n1; i++){
        a[i] = arr[si + i];
    }
    //Copy second half into temp array 'b'
    for(int i = 0; i < n2; i++){
        b[i] = arr[mid + 1 + i];
    }


    int i = 0;
    int j = 0;
    int k = si;

    //Compare and shift elements in sorted order into resultant array
    while(i < n1 && j < n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            i++;
            k++;
        }
        else{
            arr[k] = b[j];
            j++;
            k++;
        }

    }
    // Add the remaining elements of the first half in the final array
    while(i < n1){
        arr[k] = a[i];
        i++;
        k++;
    }
    // Add the remaining elements of the second half in the final array
    while(j < n2){
        arr[k] = b[j];
        j++;
        k++;
    }
}
void mergeSort(int a[], int startIndex, int endIndex){
    if(startIndex >= endIndex){
        return;
    }
    
    int mid = (startIndex+endIndex)/2;
    // Recursive calls on two halves of the array.
    mergeSort(a, startIndex, mid);
    mergeSort(a, mid+1, endIndex );
    merge(a, startIndex, endIndex, mid);

}

int main(){
    int a[] = {5,4,3,2,1,0,10,11,34,56,78,3,9};
    mergeSort(a,0,12);
    for(int i = 0; i < 13; i++){
        cout << a[i] << endl;
    }
}