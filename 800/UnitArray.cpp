#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n;
        cin>>n;

        unordered_map<int , int> mp;
        mp[1] = 0;
        mp[-1] = 0;
        for(int i = 0 ; i<n ; i++){
                int ele;
                cin>>ele;

                mp[ele]++;
        }
        int cnt = 0;
        if(mp[-1] % 2 != 0){
                cnt++;
                mp[-1]--;
                mp[1]++;
        }

        if(mp[-1] > mp[1]){
                int diff = mp[-1] - mp[1];
                int ops = 0;
                if(diff % 2 == 0)
                ops = diff / 2;
                else
                ops = (diff / 2 + 1);

                if(ops % 2 != 0)
                ops += 1;

                cnt += ops;
        }      

        cout<<cnt<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}