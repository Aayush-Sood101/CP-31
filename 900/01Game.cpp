#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        string str;
        cin>>str;
        int n = str.length();
        unordered_map<int , int> mp; // val freq;
        mp[0] = 0;
        mp[1] = 0;
        for(int i = 0 ; i<n ; i++){
                if(str[i] == '0')
                mp[0]++;
                else
                mp[1]++;
        }

        int pairs = (mp[0] < mp[1]) ? mp[0] : mp[1];
        if(pairs % 2 == 0){
                cout<<"NET"<<endl;
        }
        else{
                cout<<"DA"<<endl;
        }
} 

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}