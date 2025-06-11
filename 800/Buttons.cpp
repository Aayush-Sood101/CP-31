#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int a , b , c;
        cin>>a>>b>>c;
        if(a == b){
                if(c % 2 == 0)
                cout<<"Second"<<endl;
                else
                cout<<"First"<<endl;
        }
        else if(a > b){
                cout<<"First"<<endl;
        }
        else{
                cout<<"Second"<<endl;
        } 
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}