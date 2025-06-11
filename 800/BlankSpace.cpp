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

        int maxCnt = 0;
        int i =0 , j = 0;

        while(j < n){
                if(v[j] == 1){
                        j++;
                        i++;
                        continue;
                }

                while(j<n && v[j] == 0){
                        j++;
                }

                int len = j - i;
                if(len > maxCnt)
                maxCnt = len;

                i = j;
        }

        cout<<maxCnt<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}