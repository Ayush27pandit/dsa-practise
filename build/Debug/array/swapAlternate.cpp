#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    //to swap alternate output should be{2,1,4,3,6,5}
    //printing array
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    
    int temp;
    for(int i=0;i<5;i=i+2){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    cout<<endl;
    //printing new array
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    



    return 0;
}