#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        string str;
        cin>>str;

        int n = str.length();

        int ans1 = 0;
        bool flag1 = false , flag2 = false;
        for(int i = n - 1 ; i>=0 ; i--){
                char ch = str[i];
                if(flag1 == false){
                        if(ch == '5'){
                                flag1 = true;
                                continue;
                        }
                }
                else{
                        if(ch == '2' || ch == '7'){
                                flag2 = true;
                                break;
                        }
                }
                ans1++;
        }

        
        int ans2 = 0;
        bool flag3 = false , flag4 = false;
        for(int i = n - 1 ; i>=0 ; i--){
                char ch = str[i];
                if(flag3 == false){
                        if(ch == '0'){
                                flag3 = true;
                                continue;
                        }
                }
                else{
                        if(ch == '0' || ch == '5'){
                                flag4 = true;
                                break;
                        }
                }
                ans2++;
        }

        if(flag1 && flag2 && flag3 && flag4){
                if(ans1 < ans2)
                cout<<ans1<<endl;
                else
                cout<<ans2<<endl;
        }
        else if(flag1 && flag2){
                cout<<ans1<<endl;
        }
        else if(flag3 && flag4){
                cout<<ans2<<endl;
        }
        else{
                cout<<n<<endl;
        }

}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}