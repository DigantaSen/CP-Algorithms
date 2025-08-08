#include<bits/stdc++.h>
using namespace std;

int power(int n, int m){
    int ans = 1;

    while(m > 0){
        if(m%2 == 1) ans *= n;
        n *= n;
        m /= 2;
    }

    return ans;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);  // Redirect standard input to input.txt
    freopen("output.txt", "w", stdout); // Redirect standard output to output.txt
    #endif

    int n, m;
    cin>>n>>m;

    int ans = power(n, m);
    
    cout<<ans<<endl;

    return 0;
}

