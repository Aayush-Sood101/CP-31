#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        ll n , k , x;
        cin>>n>>k>>x;

        ll sum1 = 0 , sum2 = 0;
        ll val = 0;
        val = n - k;

        sum1 = (k * (k + 1)) / 2;
        sum2 = ((n * (n + 1)) / 2) - ((val * (val + 1)) / 2) ;
        if(sum1 <= x && x <= sum2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}