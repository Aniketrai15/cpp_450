#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<pair<int,int>> buy;
    vector<pair<int,int>> sell;

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            sell.push_back({arr[i],i});
        }
        else{
            buy.push_back({arr[i],i});
        }
    }
    int ans = 0;
    int i=0,j=0;
    while(i<buy.size() and j<sell.size()){
        int temp = min(buy[i].first,abs(sell[j].first));
        buy[i].first = buy[i].first-temp;
        sell[j].first = sell[j].first+temp;
        int diff = abs(buy[i].second - sell[j].second);
        ans+= diff * temp;
        if(buy[i].first==0){
            i++;
        }
        if(sell[j].first==0){
            j++;
        }
    }

    cout<<ans;


    return 0;
}