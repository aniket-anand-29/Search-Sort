//Much Faster
//Base Case => Size = 0,1
//Divide Array into two parts

#include<iostream>
using namespace std;
void merge(int a[], int si, int ei){
    int k = si;
    int j = (si+ei)/2;
    for(int i = si; i < ei; i++){
        if(a[k] > a[j]){
            
        }
    }
}
void mergeSortHelper(int a[], int startIndex, int endIndex){
    //Base Case
    if(startIndex >= endIndex){
        return;
    }
    int mid = (startIndex + endIndex)/2;
    mergeSortHelper(a, startIndex, mid);
    mergeSortHelper(a, mid+1, endIndex);
    merge(a, startIndex, endIndex);

}
void mergeSort(int a[], int size){
    void mergeSortHelper(int a[], int startIndex, int endIndex);
}
int main(){

}