# include <bits/stdc++.h>
using namespace std;

void find_bit_at(int n, int pos){
    // ith bit from back(0 based indexing)
    // mask
    int bit_mask = 1 << pos;
    if(bit_mask & n)
    cout<<"1";
    else
    cout<<"0";
}

void set_bit_at_to_1(int n, int pos){
    // ith bit from back(0 based indexing)
    // mask
    int bit_mask= 1 << pos;
    n = bit_mask | n;
    cout<<n;
}

void clear_ith_bit(int n, int pos){
    //ith bit from back(0 based indexing)
    // mask
    int bit_mask = 1 << pos;
    bit_mask = ~(bit_mask);
    n = n & bit_mask;
    cout<<n;
}