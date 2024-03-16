#include <bits/stdc++.h> // for INT_MIN
using namespace std;

int main() {
    vector<int> nums = {10, 21, 31};
    int n = nums.size();
        
    for(int i = 0; i < n; i++) {
        int maxi = INT_MIN; 
        int val = nums[i];
        while(val) {
            cout<<val<<endl;
            int d = val % 10; // Use val, not nums[i]
            maxi = max(d, maxi);
            cout<<maxi<<endl;
            val = val / 10;
        }
        nums[i] = maxi;
    }

    // Print the updated nums array
    int sum {0};
    for(int i = 0; i < n; i++) {
        sum = sum + nums[i];
       cout<<sum<<" "<< "at i : "<<i <<endl;
    }
    cout << endl;

    cout<<"Final Sum : "<<sum ;

    return 0;
}