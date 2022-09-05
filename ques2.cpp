#include<bits/stdc++.h>
using namespace std;

pair<int,int> min_max(int arr[],int s,int e){
    int n = e-s+1;
    pair<int,int> ans;
    if(n==1){
        ans.first=arr[s];
        ans.second=arr[s];
        return ans;
    }

    else if(n==2){
        ans.first=min(arr[s],arr[e]);
        ans.second=max(arr[s],arr[e]);
        return ans;
    }

    else{
        int m = (s+e)/2;
        pair<int,int> p1 = min_max(arr,s,m);
        pair<int,int> p2 = min_max(arr,m+1,e);

        ans.first = min(p1.first,p2.first);
        ans.second = max(p1.second,p2.second);

        return ans;
    }
    
}

int main(){
    int n;
    cout<<"enter size of the arr";
    cin>>n;
    cout<<"enter the elements";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    pair<int,int> ans = min_max(arr,0,n-1);

    cout<<"min:"<<ans.first<<" "<<"max:"<<ans.second;


    return 0;
}