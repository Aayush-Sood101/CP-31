#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i = 0 ; i<n ; i++){
                cin>>v[i];
        }

        int maxEle = INT_MIN , minEle = INT_MAX;
        int ans3 = INT_MIN;
        for(int i = 0 ; i<n ; i++){
                if(v[i] > maxEle)
                maxEle = v[i];
                else if(v[i] < minEle)
                minEle = v[i];

                if(i == n - 1)
                continue;

                int val = v[i] - v[i + 1];
                if(val > ans3)
                ans3 = val;
        }

        int ans1 = maxEle - v[0];
        int ans2 = v[n - 1] - minEle;
        int ans = max(ans1 , max(ans2 , ans3));

        cout<<ans<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}