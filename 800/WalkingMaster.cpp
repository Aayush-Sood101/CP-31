#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        ll a , b , c  , d;
        cin>>a>>b>>c>>d;
        
        ll x_walk = c - a;
        ll y_walk = d - b;
        if(y_walk < 0){
                cout<<"-1"<<endl;

                return;
        }
        else if(x_walk == y_walk){
                cout<<x_walk<<endl;
                return ;
        }
        else if(x_walk > y_walk){
                cout<<"-1"<<endl;

                return;
        }
        else{
                ll ans = abs(x_walk - y_walk) + y_walk;
                cout<<ans<<endl;

                return;
        }
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}