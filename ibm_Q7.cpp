#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
#include<climits>
using namespace std;

int doubleElements(vector<int>& arr){
    if(arr.size()==0){
        return 0;
    }
    int index = 1;
    for(int i = 1;i<arr.size();i++){
        if(arr[i]!= arr[i-1]){
            arr[index]=arr[i];
            index++;
        }
    }
    return index;
}

int main(){
string str;
getline(cin,str);
for(char &c : str){
    if(c=='['||c==']'||c==','){
        c=' ';
    }
}
stringstream ss(str);
int num;
vector<int>arr;
while(ss>>num){
    arr.push_back(num);
}
cout << doubleElements(arr)<<endl;
return 0;
}