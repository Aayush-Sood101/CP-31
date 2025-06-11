#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n;
        cin>>n;

        string str;
        cin>>str;
        int i = 0 , j = n - 1;
        while(i < j){
                if(str[i] != str[j]){
                        i++;
                        j--;
                }
                else
                break;
        }

        if(i > j){
                cout<<"0"<<endl;
                return;
        }
        else{
                cout<<(j - i + 1)<<endl;
                return ;
        }
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}