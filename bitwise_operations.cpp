# include <bits/stdc++.h>
# include <iostream>
# include "swap.h"
# include "bit_masking.h"
using namespace std;
void odd_even(int n){
    // last bit of even is always 0;
    if(n & 1 == 1)
    cout<<"Odd"<<"\n";
    else
    cout<<"Even"<<"\n";
}



int main(){
    int n1 = 59 ; //111011
    int n2 = 876  ;  //1101101100
    cout<<"Number of digits in decimal integer is (int(log base 10(n))+1) = ";
    cout<<int(log10(n1))+1<<"\n";
    cout<<"Number of digits in binary form of an integer is (int(log base 2(n))+1) = ";
    cout<<int(log2(n1))+1<<"\n";
//    odd_even(n2);
//   last_set_bit_to_zero(14);
find_mask_of_rightmost_set_bit(12);
}