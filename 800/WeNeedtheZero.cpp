#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n;
        cin>>n;

        int xor_val = 0;
        for(int i = 0 ; i<n ; i++){
                int ele;
                cin>>ele;
                xor_val = xor_val ^ ele;
        }

        if(n % 2 == 0){
                if(xor_val == 0){
                        cout<<"3"<<endl;
                }
                else{
                        cout<<"-1"<<endl;
                }
        }
        else{
                cout<<xor_val<<endl;
        }
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}