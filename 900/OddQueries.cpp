#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n,q;
        cin>>n>>q;

        vector<int> v(n);
        int orgSum = 0;
        for(int i = 0 ; i<n ; i++){
                cin>>v[i];
                orgSum += v[i];
        }

        vector<int> pre(n);
        pre[0] = v[0];
        for(int i = 1 ; i<n ; i++){
                pre[i] = pre[i - 1] + v[i];
        }

        for(int i = 0 ; i<q ; i++){
                int l , r, x;
                cin>>l>>r>>x;
                int sum = orgSum;
                int idx1 = l - 1;
                int idx2 = r - 1;
                if(idx1 == 0){
                        sum -= pre[idx2];
                }
                else{
                        sum -= (pre[idx2] - pre[idx1 - 1]);
                }

                sum = sum + (l - r + 1) * x;
                if(sum % 2 != 0){
                        cout<<"YES"<<endl;
                }
                else{
                        cout<<"NO"<<endl;
                }
        }

}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}