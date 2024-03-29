#include<iostream>
using namespace std;


int binarySearch(int key,int size,int arr[]){

    int left=0;
    int right=size-1;
    int flag=0;
    int mid=0;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==key) {
            flag=1;
            break;
         }



        else if(arr[mid]<key) left=mid+1;
        else if(arr[mid]>key) right=mid-1;
    }

    if(flag) return mid;
    else return -1;

}

int main(){

    int Arr[5]={10,21,27,89,94};
    int Arr2[6]={2,4,11,34,55,67};
    int value;

   cout<<"enter key to be search in array";
   cin>>value;

    int index=binarySearch(value,5,Arr);
    int index2=binarySearch(value,6,Arr2);

    cout<<index<<endl;
    cout<<index2;

    return 0;
}