#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int largest(vector<int>&arr,int &n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}


int main(){
int n;
cin >>n;
vector<int> arr(n);
for(int i =0;i<n;i++){
    cin>>arr[i];
}
int ans =largest(arr,n);
ans == -1 ?cout << "-1" : cout<<ans;
return 0;
}