#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> ans;
int check(int num){
        int nonZero = -1;
        while(num > 0){
                int rem = num % 10;
                num /= 10;

                if(rem == 0)
                continue;
                else{
                        if(nonZero == -1)
                        nonZero = rem;
                        else
                        return 0;
                }
        }

        return 1;
}

void solve(){
        int n;
        cin>>n;

        cout<<ans[n]<<endl;
}

int main(){
        int t;
        cin>>t;

        ans.clear();
        ans.resize(999999 + 4);
        ans[0] = 0;
        for(int i = 1 ; i<=999999 ; i++){
                int flag = check(i);
                if(flag)
                ans[i] = ans[i - 1] + 1;
                else
                ans[i] = ans[i - 1];
        }

        while(t--){
                solve();
        }
}