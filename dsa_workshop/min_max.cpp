#include<iostream>
using namespace std;
int max(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max; 
}
int min(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min; 
}
int main(){
    int arr[5]={18,23,12,34,15};
    cout<<"maximum value is"<<max(arr,5)<<endl;
    cout<<"minimum value is"<<min(arr,5)<<endl;
}