#include<iostream>
using namespace std;


void maximum(int arr[],int size){

    int larger= INT8_MIN;

    for(int i=0;i<size;i++){
     larger=max(larger,arr[i]);

    }

    cout<<larger;
}

int main(){
    int arr[3]={3,-55,4};
    maximum(arr,3);

    return 0;
}