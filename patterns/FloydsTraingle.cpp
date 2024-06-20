#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int row, col, n, count=1;
    cin>>n;
    for (int i = 1 ; i <= n ; i++){
            for (int j= 1 ; j <= i ; j++){
                    cout<<count<<" ";
                    count++; 
            }
        cout<<'\n';
        }
    
    return 0;
}