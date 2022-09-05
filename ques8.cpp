#include<iostream>
#include<climits>
using namespace std;

int maxSubarrSum(int arr[],int n){
    int max_sum_till_now=INT_MIN,max_ending_here=0;
    for(int i=0;i<n;i++){
        max_ending_here=max_ending_here+arr[i];
        if(max_ending_here>max_sum_till_now){
            max_sum_till_now=max_ending_here;
        }
        if(max_ending_here<0){
            max_ending_here=0;
        }
    }
    return max_sum_till_now;
}

int main(){
    int arr[] = {-1,3,-5,-6,8,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxSubarrSum(arr,n);

    return 0;
}