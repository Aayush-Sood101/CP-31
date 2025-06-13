#include<bits/stdc++.h>
#define ll long long int
using namespace std;


vector<ll> dp;

void solve(){
        ll n;
        cin>>n;
        ll cnt = 0;
        while(n != 1){
                if(n % 6 == 0)
                n /= 6;
                else if((n * 2) % 6 == 0)
                n *= 2;
                else{
                        cout<<"-1"<<endl;
                        return ;
                }

                cnt++;
        }
        cout<<cnt<<endl;
}

int main(){
        int t;
        cin>>t;
        while(t--){
                solve();
        }
}