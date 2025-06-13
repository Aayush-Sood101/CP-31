#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n;
        cin>>n;

        ll cnt0 = 0 , cnt1 = 0;
        for(int i = 0 ; i<n ; i++){
                int ele;
                cin>>ele;
                if(ele == 0)
                cnt0++;
                else if(ele == 1)
                cnt1++;
        }

        ll ans = (ll)pow(2 , cnt0) * cnt1;
        cout<<ans<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}