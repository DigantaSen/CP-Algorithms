#include<bits/stdc++.h>
using namespace std;

vector<int> sieve(int n){
    vector<int> sie(n+1, 1);
    sie[0] = sie[1] = 0;

    for(int i = 2; i <= sqrt(n); i++){
        if(sie[i] == 1){
            for(int j = i*i; j <= n; j+=i){
                sie[j] = 0;
            }
        }
    }

    return sie;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);  // Redirect standard input to input.txt
    freopen("output.txt", "w", stdout); // Redirect standard output to output.txt
    #endif

    int n;
    cin>>n;

    vector<int> sie = sieve(n);
    
    for(int i = 0; i < n+1; i++){
        cout<<i<<"->"<<sie[i]<<endl;
    }

    return 0;
}