#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n;
        cin>>n;

        for(int i = 0 ; i<n ; i++){
                int ele;
                cin>>ele;

                cout<<(n - ele + 1)<<" ";
        }

        cout<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}