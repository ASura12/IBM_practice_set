#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int countVowels(string str){
    int count = 0;
    for(char &c : str){
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    getline(cin, str);
    
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    
    cout << countVowels(str) << endl;
    return 0;
}
