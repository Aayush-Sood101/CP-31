#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int x , k;
        cin>>x>>k;

        if(x % k != 0){
                cout<<"1"<<endl;
                cout<<x<<endl;

                return ;
        }

        else{
                cout<<"2 "<<endl;
                cout<<"1 "<<(x - 1)<<endl;
        }
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}