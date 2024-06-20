#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int row, col, n, i ,j ,s;
    cin>>n;
    for (i = 1 ; i <= n ; i++){
            for (int j= 1 ; j <= n ; j++){
                    (j<=n-i)? cout<<" ": cout<<"*";
            }
            
        cout<<'\n';
        }
    
    return 0;
}