#include<iostream>

using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(int a[], int si, int ei){
  
    int pivot = a[ei];
    int i = si - 1;

    for(int j = si; j < ei; j++){
        if(a[j] < pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    //cout << a[i+1] << a[ei] << endl;;

    swap(a[i+1], a[ei]);
    //cout << a[i+1] << a[ei] << endl;;
    //cout << i+1 << endl;
    return i+1;

}
void quickSort(int a[], int startIndex, int endIndex){
    if(startIndex < endIndex){
    int pivot = partition(a, startIndex, endIndex);
    quickSort(a, startIndex, pivot-1);
    quickSort(a, pivot+1, endIndex);
    }
}

int main(){
    int a[] = {5,4,3,2,1,0};
    quickSort(a,0,5);

    for(int i = 0; i < 6; i++){
        cout << a[i] << " ";
    }
}