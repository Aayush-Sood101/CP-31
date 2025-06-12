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

        while(true){
                bool flag = true;
                for(int i = 1 ; i<n-1 ; i++){
                        if(v[i - 1] < v[i] && v[i] > v[i + 1]){
                                swap(v[i] , v[i + 1]);
                                flag = false;
                        }
                }
                if(flag)
                break;
        }

        for(int i = 1 ; i<n ; i++){
                if(v[i - 1] < v[i])
                continue;
                else{
                        cout<<"NO"<<endl;
                        return ;
                }
        }

        cout<<"YES"<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}