#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool checkSorting(vector<int> v){
        bool flag = true;
        for(int i = 1 ; i<v.size() ; i++){
                if(v[i - 1] <= v[i]){
                        continue;
                }
                else{
                        flag = false;
                        break;
                }
        }

        return flag;
}

void solve(){
        int n;
        cin>>n;
        
        vector<int> v(n);
        for(int i = 0 ; i<n ; i++){
                cin>>v[i];
        }
        bool flag = checkSorting(v);
        if(flag == false){
                cout<<"0"<<endl;
                return ;
        }
        
        int minDiff = INT_MAX;
        for(int i = 1 ; i<n ; i++){
                int diff = v[i] - v[i - 1];
                if(diff < minDiff){
                        minDiff = diff;
                }
        }
        if(minDiff == INT_MAX)
        cout<<"1"<<endl;
        else
        cout<<(minDiff / 2 + 1)<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}