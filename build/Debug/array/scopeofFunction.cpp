#include<iostream>
using namespace std;
//it is important to pass size of array because when you just pass array it will treat it as pointer like *arr even if you use  square brackets 
void update(int arr[],int size){

    arr[0]=22;

    cout<<"Update Function array"<<endl;
     for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

//when array are passed in function , then any change or update hapen in funtion will also change the original array because address of original array was passed in arguement, therefore changes made in array are updated


int main(){
    int arr[3]={3,-55,4};
    update(arr,3);
    cout<<"Main Function array"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}