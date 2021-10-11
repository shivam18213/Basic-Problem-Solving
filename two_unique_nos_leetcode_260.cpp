# include <bits/stdc++.h>
using namespace std;

// every element occurs twice except 2 unique elements
// we are required to find those 2

vector<int> two_unique_elements(vector<int> arr){
    // eg -> [36,50,24,56,36,24,42,50], o/p = 56,42
    int xxory = 0;
    // finding 56 ^ 42
    for(int i=0; i< arr.size();i++)
        xxory = xxory ^ arr[i];
    // xxory = 56 ^ 42 -> 010010

    // finding mask of rightmost set bit of xxory
    int rmsb_pos = (xxory & (xxory-1)) ^ xxory;
    // rmsb = 000010
    // we now want to take xor of those with 1 at that postion and those with zero at that position seperately
    // this is because both the unique numbers will have differnt bit value at that postion

    int zero_pos=0;
    int one_pos=0;
    for(int i=0; i< arr.size();i++){
        if((rmsb_pos & arr[i]) == 0) // zero at that pos
        zero_pos = zero_pos ^ arr[i];
        else
        one_pos = one_pos ^ arr[i];
    }
    cout<<zero_pos<<one_pos;
    vector<int> res{zero_pos,one_pos};
    return res;
}
int main(){
    vector<int> arr = {23, 27, 23, 17, 17, 37};
    vector<int> ret = two_unique_elements(arr);
}
