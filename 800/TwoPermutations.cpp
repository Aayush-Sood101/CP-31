#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n,a,b;
        cin>>n>>a>>b;
        
        if(n == a && n == b){
                cout<<"Yes"<<endl;

                return ;
        }

        int val = n - a - b;

        if(val >= 2){
                cout<<"Yes"<<endl;
        }
        else{
                cout<<"No"<<endl;
        }
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}