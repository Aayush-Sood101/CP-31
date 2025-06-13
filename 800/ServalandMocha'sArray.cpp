#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(int num1 , int num2){

        while(num1 > 0){
                int rem = num2 % num1;
                num2 = num1;
                num1 = rem;
        }
        // cout<<num2<<endl;
        if(num2 == 1 || num2 == 2)
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

        sort(v.begin() , v.end());

        for(int i = 0 ; i<n ; i++){
                for(int j = i + 1 ; j<n ; j++){
                        if(check(v[i] , v[j])){
                                cout<<"Yes"<<endl;
                                return ;
                        }
                }
        }

        cout<<"No"<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}