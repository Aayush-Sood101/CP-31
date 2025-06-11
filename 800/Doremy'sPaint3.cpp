#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n;
        cin>>n;

        unordered_map<int , int> mp; //val freq

        for(int i = 0 ; i<n ; i++){
                int ele;
                cin>>ele;
                mp[ele]++;
        }

        if(mp.size() == 2 || mp.size() == 1){
                bool flag = true;
                if(n % 2 != 0){ //odd
                        for(auto p: mp){
                                int val = p.first;
                                int freq = p.second;
                                if(!(freq == n / 2 || freq == (n - n / 2) || freq == n)){
                                        flag = false;
                                        cout<<"No"<<endl;
                                        break;
                                }
                        }
                        if(flag)
                        cout<<"Yes"<<endl;
                }
                else{
                        for(auto p: mp){
                                int val = p.first;
                                int freq = p.second;
                                if(!(freq == n / 2 || freq == n)){
                                        flag = false;
                                        cout<<"No"<<endl;
                                        break;
                                }
                        }
                        if(flag)
                        cout<<"Yes"<<endl;
                }
        }
        else{
                cout<<"No"<<endl;
        }
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}