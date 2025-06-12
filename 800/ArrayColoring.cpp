#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n;
        cin>>n;

        unordered_map<string , int> mp; // val freq

        mp["odd"] = 0;
        mp["even"] = 0;
        for(int i = 0 ; i<n ; i++){
                int ele;
                cin>>ele;
                if(ele % 2 == 0)
                mp["even"]++;
                else
                mp["odd"]++;
        }

        if(mp["odd"] % 2 == 0){
                cout<<"YES"<<endl;
                return ;
        }
        else{
                cout<<"NO"<<endl;
        }
}

int main(){
        int t;
        cin>>t;
        
        while(t--){
                solve();
        }
}