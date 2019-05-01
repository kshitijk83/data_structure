#include <iostream>
using namespace std;

int main(){
    int arr[6]={2,3,10,5,6,7};
    int x =10;
    int n = sizeof(arr)/sizeof(x);
    for(int i =0;i<6;i++){
        if(arr[i]==x){
            cout<<"10 found";
        }

    }
}