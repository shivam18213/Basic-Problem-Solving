# include <bits/stdc++.h>
using namespace std;
void swap(int& n1, int& n2){
    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;
    cout<<"n1 "<<n1<<"\n";
    cout<<"n2 "<<n2<<"\n";
}