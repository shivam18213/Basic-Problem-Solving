# include <bits/stdc++.h>
# include "printingvector.h"
using namespace std;

int method1(vector<int> nums){
    // using maps
    map<int,int> m;
    for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
    }
    for(auto &it : m){
        if(it.second == 1)
        return it.first;
    }
    return 0;
}

int method2(vector<int> nums){
    // using sorting
    sort(nums.begin(), nums.end());
    // a cluster of 3 numbers will be created
    //if unique is first
    if(nums[0] != nums[1])
    return nums[0];
    // if last is unique
    if(nums[nums.size()-1] != nums[nums.size()-2])
    return nums[nums.size()-1];

    for(int i=1; i<nums.size();){
        if(nums[i] != nums[i-1])
        return nums[i-1];
        i= i+3;
    }
    return 0;
}

int method3(vector<int> nums){
    string res="";
    int mask=1;
    int count=0;
    for(int i=0;i<32;i++){
        count=0;
        for(int j=0; j<nums.size();j++){
            if((nums[j] & mask) == mask)
                count++;
        }
        mask = mask << 1;
        if(count % 3 != 0)
            res= "1"+res;
        else
            res= "0"+res;
    }
    int number = stoi(res, nullptr, 2);
    return number;
}

int main_method(vector<int> nums){
    //counting twos and ones
    // eg {2,2,2,3}
    int ones =0;
    int twos =0;
    for(int i=0; i<nums.size();i++){
        ones = ones ^ nums[i];
        ones = ones & (~twos);
        twos = twos ^ nums[i];
        twos = twos & (~ones);
        cout<<"ones"<<ones<<"\n";
        cout<<"tows"<<twos<<"\n";
    }
    return ones;
}
int main(){
    vector<int> nums{2,3,2,2};
    int r = main_method(nums);
    cout<<r;
}