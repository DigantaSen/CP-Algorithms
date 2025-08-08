#include<bits/stdc++.h>
using namespace std;

int power(int n, int m, int p){
    int ans = 1;

    while(m > 0){
        if(m%2 == 1) ans = (ans*n)%p;
        n  = (n*n)%p;
        m /= 2;
    }

    return ans;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);  // Redirect standard input to input.txt
    freopen("output.txt", "w", stdout); // Redirect standard output to output.txt
    #endif

    int n, m, p;
    cin>>n>>m>>p;

    int ans = power(n, m, p);
    
    cout<<ans<<endl;

    return 0;
}