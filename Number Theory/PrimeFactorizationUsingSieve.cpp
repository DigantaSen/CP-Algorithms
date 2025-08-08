#include<bits/stdc++.h>
using namespace std;

vector<int> sieve(int n){
    vector<int> sie(n+1, -1);

    for(int i = 2; i <= sqrt(n); i++){
        if(sie[i] == -1){
            for(int j = i*i; j <= n; j+=i){
                if(sie[j] == -1) sie[j] = i;
            }
        }
    }

    return sie;
}

void primeFactorization(int n, vector<int>& sie){

    while(sie[n] != -1){
        cout<<sie[n]<<"*";
        n /= sie[n];
    }

    cout<<n<<endl;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);  // Redirect standard input to input.txt
    freopen("output.txt", "w", stdout); // Redirect standard output to output.txt
    #endif

    int n;
    cin>>n;

    vector<int> sie = sieve(n);
    
    primeFactorization(n, sie);

    return 0;
}

// TC:- O(logn)