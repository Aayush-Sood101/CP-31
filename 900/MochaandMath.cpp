#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n;
        cin>>n;

        int ele;
        cin>>ele;
        for(int i = 0 ; i<n-1 ; i++){
                int ele1;
                cin>>ele1;
                ele = ele & ele1;
        }
        
        cout<<ele<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}