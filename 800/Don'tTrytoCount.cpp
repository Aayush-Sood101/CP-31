#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n , m;
        cin>>n>>m;

        string seq , pat;
        cin>>seq>>pat;
        int cnt = 0;
        for(int i = 1 ; i<=5 ; i++){
                if(seq.find(pat) != std::string::npos){
                        cout<<cnt<<endl;
                        return ;
                }
                seq += seq;
                cnt++;
        }
        if(seq.find(pat) != std::string::npos){
                cout<<cnt<<endl;
                return ;
        }

        cout<<"-1"<<endl;
        
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}