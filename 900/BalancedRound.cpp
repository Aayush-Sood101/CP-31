#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n,k;
        cin>>n>>k;
        
        vector<int> v(n);
        for(int i = 0 ; i<n ; i++){
                cin>>v[i];
        }
        sort(v.begin() , v.end());
        int i = 1 , max_freq = 1;
        while(i < n){
                if(v[i] - v[i - 1] <= k){
                        int freq = 1;
                        while(i < n && v[i] - v[i - 1] <= k){
                                i++;
                                freq++;
                        }

                        if(freq > max_freq)
                        max_freq = freq;
                }
                else
                i++;
        }

        cout<<(n - max_freq)<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}