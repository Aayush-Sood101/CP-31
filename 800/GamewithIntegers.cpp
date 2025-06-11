#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n;
        cin>>n;

        n %= 3;

        if(n == 1 || n == 2)
        cout<<"First"<<endl;
        else
        cout<<"Second"<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}