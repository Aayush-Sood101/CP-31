#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int calScore(int i , int j){
        if(i == 0 || i == 9 || j == 0 || j == 9)
        return 1;
        else if(i == 1 || i == 8 || j == 1 || j == 8)
        return 2;
        else if(i == 2 || i == 7|| j == 2 || j == 7)
        return 3;
        else if(i == 3 || i == 6 || j == 3 || j == 6)
        return 4;
        else
        return 5;
        
}

void solve(){

        int sum = 0;

        for(int i = 0 ; i<10 ; i++){
                string str;
                cin>>str;
                for(int j = 0 ; j<10 ; j++){
                        char ch = str[j];
                        if(ch == 'X'){
                                int score = calScore(i , j);
                                sum += score;
                        }
                }
        }

        cout<<sum<<endl;
}

int main(){
        int t;
        cin>>t;
        cin.ignore();
        while(t--){
                solve();
        }
}