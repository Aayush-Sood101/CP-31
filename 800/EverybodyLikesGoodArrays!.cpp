#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool diffParity(int num1 , int num2){
        if(num1 % 2 == 0 && num2 % 2 != 0)
        return true;
        else if(num1 % 2 != 0 && num2 % 2 == 0)
        return true;
        else
        return false;
}

void solve(){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i = 0 ; i<n ; i++){
                cin>>v[i];
        }

        int cnt = 0;
        int i = 0 , j = 1;
        while(j < n){
                if(diffParity(v[i] , v[j])){
                        i = j;
                        j++;
                }
                else{
                        cnt++;
                        j++;
                }
        }

        cout<<cnt<<endl;
}

int main(){
        int t;
        cin>>t;
        
        while(t--){
                solve();
        }
}