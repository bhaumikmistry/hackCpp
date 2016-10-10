#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    sort (arr.rbegin(), arr.rend());
    //for (std::vector<int>::iterator it=arr.begin(); it!=arr.end(); ++it)
    //std::cout << ' ' << *it;
    //std::cout << '\n';
    
    
    int i=0;
    for(int i=0;i<n-2;i++){
        //cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2];
        if( arr[i+1] + arr[i+2] > arr[i]){
            cout<<arr[i+2]<<" "<<arr[i+1]<<" "<<arr[i];
            break;
        }
        if(i==n-3){
            cout<<"-1";
        }
    }
    return 0;
}
