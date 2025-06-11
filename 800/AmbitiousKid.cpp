#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
        int n;
        cin>>n;

        int minDiff = INT_MAX;
        for(int i = 0 ; i<n ; i++){
                int ele;
                cin>>ele;

                int diff = abs(ele - 0);

                if(diff < minDiff)
                minDiff = diff;
        }

        cout<<minDiff<<endl;
}