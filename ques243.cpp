#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;


int main(){
    int r,c,n;
    cin>>r>>c>>n;

    vector<int> v1;
    vector<int> v2;
    v1.push_back(0);
    v2.push_back(0);
    for(int i=0;i<n;i++){
        int t1,t2;
        cin>>t1>>t2;
        v1.push_back(t1);
        v2.push_back(t2);
    }

    v1.push_back(r+1);
    v2.push_back(c+1);


    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    int row_max = INT_MIN;
    int col_max = INT_MIN;
    for(int i=1;i<v1.size();i++){
        row_max = max(row_max,v1[i]-v1[i-1]-1);
        col_max = max(col_max,v2[i]-v2[i-1]-1);
    }
    cout<<row_max*col_max;

    return 0;
}