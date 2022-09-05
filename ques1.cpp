#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter te no of ele: ";
    cin>>n;
   
    int arr[n];
    cout<<"enter the ele ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"reversed arr is";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }



    return 0;
}