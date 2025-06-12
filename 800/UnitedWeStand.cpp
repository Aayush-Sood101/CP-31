#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void display(vector<int> v){
        for(int ele : v)
        cout<<ele<<" ";

        cout<<endl;
}

void solve(){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i = 0 ; i<n ; i++){
                cin>>v[i];
        }

        sort(v.begin() , v.end());

        vector<int> ans1;
        vector<int> ans2;

        ans2.push_back(v[n - 1]);
        for(int i = 0 ; i<n-1 ; i++){
                if(v[i] == v[n - 1]){
                        ans2.push_back(v[i]);
                }
                else{
                        ans1.push_back(v[i]);
                }
        }

        if(ans1.size() == 0){
                cout<<"-1"<<endl;
                return ;
        }

        cout<<ans1.size()<<" "<<ans2.size()<<endl;

        display(ans1);
        display(ans2);
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}