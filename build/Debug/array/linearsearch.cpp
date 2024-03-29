#include<iostream>
using namespace std;


bool linerSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key) return 1;
    }

    return 0;

}


int main(){


    int arr[5]={3,5,6,2,1};
    int num;
    cout<<"Number to be searched";
    cin>>num;

    bool search=linerSearch(arr,5,num);

    if(search) cout<<"found";
    else cout<<"not found";

    return 0;
}