#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n , k;
        cin>>n>>k;

        vector<int> v(n);
        for(int i = 0 ; i<n ; i++)
        cin>>v[i];

        if(k == 1){
                bool flag = true;
                for(int i = 0 ; i<n-1 ; i++){
                        if(v[i] > v[i + 1]){
                                cout<<"NO"<<endl;
                                flag  = false;
                                break;
                        }
                }
                if(flag)
                cout<<"YES"<<endl;

        }
        else{
                cout<<"YES"<<endl;
        }
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}