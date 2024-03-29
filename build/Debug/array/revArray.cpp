#include <iostream> 
using namespace std;
//method 1

void revArray(int arr[],int size){
    int temp=0;
    int iteration=size-1;
    for (int i = 0; i <=iteration/2 ; i++)
    {
        /* code */
        temp=arr[i];
        arr[i]=arr[iteration];
        arr[iteration]=temp;
        iteration--;
    }

    //printing array
    for (int i = 0; i <5; i++)
    {
        /* code */  cout<<arr[i];
    }  
}
//method2
    void revArray2(int arr2[], int n){
    int start=0;
    int end= n-1;
    while(start<=end){
        swap(arr2[start],arr2[end]);
        start++;
        end--;
    }

     cout<<endl;

    for (int i = 0; i <5; i++)
    {
        /* code */  cout<<arr2[i];
    }  

}

int main(){
    int arr[5]={1,2,3,4,5};
    int length=5;
    for (int i = 0; i <length; i++)
    {
        /* code */  cout<<arr[i];
    }
    cout<<endl;

    revArray(arr,5);
    revArray2(arr,5);
    

    return 0;
}