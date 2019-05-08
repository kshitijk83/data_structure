// wirte a progroamm to accept n integer from user and store it in a array.
// sort these integer using bubble sort accept another numbe rfro the user and search it in the egiven list using binary search
// if the no. is present then print its index otherwise pront not found.

#include <iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void swap(int *xp, int *yp) { 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

void bubbleSort(int arr[], int n) { 
    int i, j; 
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) 
                swap(&arr[j], &arr[j+1]); 
        }
    }
} 

int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l<=r) { 
        int mid = l + (r - l) / 2; 

        if (arr[mid] == x) 
            return mid; 

        if (arr[mid] < x) 
            l = mid + 1; 

        else
            r = mid - 1; 
    } 

    return -1; 
}

int main(){
    int n;
    cout<<"enter size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter n contents"<<endl;
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }

    bubbleSort(arr, n);
    cout<<"Sorted array: "<<endl;
    printArr(arr, n);
    int x;
    cout<<"enter search number: ";
    cin>>x;
    int y = binarySearch(arr, 0, n-1, x);
    cout<<y;

}