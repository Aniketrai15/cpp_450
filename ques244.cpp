#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int solve(int h,int a,int opt){
    if(h<=0 or a<=0){
        return 0;
    }
    if(dp[h][a]!=-1){
        return dp[h][a];
    }
    int opt1,opt2,opt3;

    if(opt!=1){
        opt1 = 1+solve(h+3,a+2,1); 
    } 
    if(opt!=2){
        opt2 =1+solve(h-5,a-10,2);
    }
    if(opt!=3){
        opt3 = 1+solve(h-20,a+5,3);
    }

    return dp[h][a]=max(opt1,max(opt2,opt3));

       


}

int main(){
    int t;
    cin>>t;
    while(t--){
        int h,a;
        cin>>h>>a;
        memset(dp,-1,sizeof(dp));
        int ans = max(solve(h-20,a+5,3),max(solve(h+3,a+2,1),solve(h-5,a-10,2)));
        cout<<ans<<endl;
    }


    return 0;
}