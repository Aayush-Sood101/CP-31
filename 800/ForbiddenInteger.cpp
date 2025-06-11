#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n , k , x;
        cin>>n>>k>>x;

        if(x != 1){
                cout<<"YES"<<endl;
                cout<<n<<endl;

                for(int i = 1 ; i<=n ; i++)
                cout<<"1 ";

                cout<<endl;

                return ;
        }

        if(k == 1){
                cout<<"NO"<<endl;

                return;
        }

        if(n % 2 == 0){
                cout<<"YES"<<endl;
                cout<<(n / 2)<<endl;

                for(int i = 1 ; i<=n/2 ; i++)
                cout<<"2 ";

                cout<<endl;

                return ;
        }
        else if(k >= 3){
                cout<<"YES"<<endl;
                int noOf2 = (n - 3) / 2;
                cout<<(noOf2 + 1)<<endl;
                for(int i = 1 ; i<=noOf2 ; i++)
                cout<<"2 ";

                cout<<"3";
                cout<<endl;

                return ;
        }

        cout<<"NO"<<endl;

}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}