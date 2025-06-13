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

        sort(v.begin() , v.end());
        if(v[0] == v[n - 1]){
                cout<<"NO"<<endl;
                return ;
        }

        cout<<"YES"<<endl;

        int i = 0 , j = n - 1;
        while(i < j){
                cout<<v[i]<<" "<<v[j]<<" ";
                i++;j--;
        }
        if(i == j)
        cout<<v[i]<<" ";

        cout<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}