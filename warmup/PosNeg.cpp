#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void cal(vector<int> arr, int n){
    float positive=0;
    float negative=0;
    float zeros=0;
    for(int arr_i = 0;arr_i < n;arr_i++){
        if(arr[arr_i]>0){
            positive+=1;
        }else if(arr[arr_i]<0){
            negative+=1;
        }else{
            zeros+=1;
        }
    }
    positive = positive/n;
    negative = negative/n;
    zeros = zeros/n;
    
    cout<< positive<<endl;
    cout<< negative<<endl;
    cout<< zeros<<endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    cal(arr,n);
    
    return 0;
}
