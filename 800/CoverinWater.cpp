#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n;
        cin>>n;

        string str;
        cin>>str;

        int i = 0;
        int cnt = 0;
        int sumCnt = 0;
        while(i < n){
                if(str[i] == '#'){
                        i++;
                        sumCnt += cnt;
                        cnt = 0;
                        continue;
                }
                else{
                        cnt++;
                        i++;
                        if(cnt == 3){
                                cout<<"2"<<endl;
                                return;
                        }
                }
        }
        sumCnt += cnt;
        cout<<sumCnt<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}