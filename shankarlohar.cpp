/*
   Code Author : ShankarLohar 
   https://www.linkedin.com/in/shankarlohar/
*/

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"
using namespace std;

inline void debugMode(){
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

unsigned int countSetBits(int n){
    unsigned int count = 0;
    while (n){
        n &= (n-1);
        count++;
    }
    return count;
}

int main(){
    debugMode();
    int t;cin>>t;
    while(t--){
        
    }
        
    return 0;
}
