#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n , x;
        cin>>n>>x;
        ll sum = 0;
        ll cnt1 = 0 , cnt2 = 0;
        for(int i = 0 ; i<n ; i++){
                ll ele;
                cin>>ele;
                if(ele % x == 0)
                cnt2 += (ele / x);
                else
                cnt2 += ((ele / x) + 1);

                sum += ele;
        }
        if(sum % x == 0)
        cnt1 += (sum / x);
        else
        cnt1 += ((sum / x) + 1);

        cout<<cnt1<<" "<<cnt2<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}