#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i = 0 ; i<n ; i++){
                cin>>v[i];
        }

        vector<int> pre(n);
        vector<int> suffix(n);

        pre[0] = (v[0] == 2) ? 1 : 0;;
        for(int i = 1 ; i<n ; i++){
                if(v[i] == 2)
                pre[i] = pre[i - 1] + 1;
                else
                pre[i] = pre[i - 1];
        }
        
        suffix[n - 1] = (v[n - 1] == 2) ? 1 : 0;

        for(int i = n - 2 ; i>=0 ; i--){
                if(v[i] == 2)
                suffix[i] = suffix[i + 1] + 1;
                else
                suffix[i] = suffix[i + 1];
        }

        int ans = -1;

        for(int i = 0 ; i<n - 1 ; i++){
                if(pre[i] == suffix[i + 1]){
                        ans = i + 1;
                        break;
                }
        }

        cout<<ans<<endl;

}

int main(){
        int t;

        cin>>t;
        while(t--){
                solve();
        }
}