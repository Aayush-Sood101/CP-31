#include<bits/stdc++.h>
#define ll long long int
#define pii pair<int , int>
using namespace std;

void solve(){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i = 0 ; i<n ; i++)
        cin>>v[i];

        vector<pii> prev(n);
        prev[0] = {-1 , -1};
        prev[1] = {v[0] , 0};

        for(int i = 2 ; i<n ; i++){
                if(v[i - 1] < prev[i - 1].first)
                prev[i] = {v[i - 1] , i - 1};
                else
                prev[i] = prev[i - 1];
        }

        vector<pii> next(n);
        next[n - 1] = {-1 , -1};
        next[n - 2] = {v[n - 1] , n - 1};
        for(int i = n - 3 ; i>=0 ; i--){
                if(v[i + 1] < next[i + 1].first)
                next[i] = {v[i + 1] , i + 1};
                else
                next[i] = next[i + 1];
        }

        for(int i = 1 ; i<n-1 ; i++){
                if(prev[i].first < v[i] && v[i] > next[i].first){
                        cout<<"YES"<<endl;
                        int freq1 = prev[i].second + 1;
                        int freq2 = i + 1;
                        int freq3 = next[i].second + 1;
                        cout<<freq1<<" "<<freq2<<" "<<freq3<<endl;

                        return ;
                }
        }

        cout<<"NO"<<endl;       
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}