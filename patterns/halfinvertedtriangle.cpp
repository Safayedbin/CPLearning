#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int row, col, n;
    cin>>n;
    for (int i = n ; i >= 1 ; i--){
            for (int j= 1 ; j <= i ; j++){
                    cout<<"*"; 
            }
        cout<<'\n';
        }
    
    return 0;
}