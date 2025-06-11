#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n , x;
        cin>>n>>x;

        vector<int> v(n);
        for(int i = 0 ; i<n ; i++){
                cin>>v[i];
        }

        int maxVol = v[0];

        for(int i = 1 ; i<n ; i++){
                int vol = v[i] - v[i - 1];
                if(vol > maxVol)
                maxVol = vol;
        }

        int vol = 2 * (x - v[n - 1]);
        if(vol > maxVol)
        maxVol = vol;

        cout<<maxVol<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}