#include<bits/stdc++.h>
using namespace std;

void primeFactorization(int n){
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            int cnt = 0;
            while(n%i == 0) {
                cnt++;
                n /= i;
            }
            cout<<i<<"^"<<cnt<<endl;
        }
    }
    if(n > 1){
        cout<<n<<"^"<<1<<endl;
    }
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);  // Redirect standard input to input.txt
    freopen("output.txt", "w", stdout); // Redirect standard output to output.txt
    #endif

    int n;
    cin>>n;

    primeFactorization(n);
    

    return 0;
}

// TC :- O(sqrt(n))