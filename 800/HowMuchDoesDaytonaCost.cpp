#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n , x;

        cin>>n>>x;

        bool flag = true;
        for(int i = 0 ; i<n ; i++){
                int ele;
                cin>>ele;
                if(ele == x){
                        if(flag)
                        cout<<"YES"<<endl;
                        flag = false;
                }
        }
        if(flag)
        cout<<"NO"<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}