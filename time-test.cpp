#include <bits/stdc++.h>
#include <chrono> 

using namespace std; 

#pragma warn -rvl 
#pragma warn -rch 
#pragma warn -par 

int solve () {
    return 0; 
}

int main( ) { 
    auto start = chrono::high_resolution_clock::now();
    /* 
        solve(); 
        enter code or via function 
    */  
    auto end = chrono::high_resolution_clock::now();
    
    long long int ans = chrono::duration_cast<chrono::microseconds> (end - start).count(); 

    cout << setprecision(10e5) << (float) ans  << " microseconds" << "\n"; 
    cout << setprecision(10e6) << (float) ans /(10e6) << " seconds"; 
} 