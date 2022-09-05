#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,0,2,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int nz=0,no=0,nt=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            nz++;
        }
        else if(arr[i]==1){
            no++;
        }
        else{
            nt++;
        }
    }

    for(int i=0;i<nz;i++){
            cout<<0<<" ";
        }
    for(int i=0;i<no;i++){
            cout<<1<<" ";
        }
    for(int i=0;i<nt;i++){
            cout<<2<<" ";
        }


    
    return 0;
}