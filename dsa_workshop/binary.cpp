#include<iostream>
using namespace std;
int binary(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid =(s+e)/2;
    while(s<=e){
        if(arr[mid]==key)
       { return mid;}
       if(arr[mid]<key){
        s=mid+1;
       }
        if(arr[mid]>key){
        e=mid-1;
       }
       mid=(e+s)/2;
    }
    return -1;  
}
int main(){
    
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int search=4;
   int x=binary(arr,10,search);
   if(x==-1){
    cout<<"key not found"<<endl;
   }
   else
   cout<<"key is found at index :"<<x<<endl;
}