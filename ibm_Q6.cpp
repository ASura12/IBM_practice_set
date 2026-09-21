#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <climits>
#include<algorithm>

using namespace std;


int secondLargest(vector<int>& arr){
    if(arr.size()<2){
        return -1;
    }
    int first  = INT_MIN,second = INT_MIN;
    for(int num:arr){
        if(num > first){
            second=first;
            first =num;
        }else if(num>second && num!=first){
            second = num;
        }
    }
    return second;
}

int main()
{
    string str;
    getline(cin, str);
    for (char &c : str)
    {
        if (c == '[' || c == ']' || c == ',')
        {
            c = ' ';
        }
    }

    stringstream ss(str);
    vector<int> arr;
    int num;
    while (ss >> num)
    {
        arr.push_back(num);
    }
    cout << "Converted Integer Array: ";
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    int result =secondLargest(arr);
    cout<<result<<endl; 
    return 0;
}