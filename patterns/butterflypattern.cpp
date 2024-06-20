#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int row, col, n, count=1;
    cin>>n;
    for (int i = 1 ; i <= (2*n) ; i++){
            for (int j= 1 ; j <= (2*n) ; j++){
                    if(i<=n){
                        if (i==n || j==1 || j==2*n || j<=i || j>2*n-i){
                            cout<<"*";
                        }
                        else{
                            cout<<" ";
                        }
                    }
                    else{
                        if ( i==n+1 || j==1 || j==2*n || j<=int(i/2) || j>2*n-int(i/2)){
                            cout<<"*";
                        }
                        else{
                            cout<<" ";
                        }
                    }
            }
        cout<<'\n';
        }
    
    return 0;
}