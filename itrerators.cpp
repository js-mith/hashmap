#include<iostream>
using namespace std;
#include<unordered_map>
#include<string>
#include<vector>

int main() {

    unordered_map<string , int>:: iterator it = ourmap.begin();
    while(it != ourmap.end()){
        cout << "key :" << it ->first << "value :" << it ->second << endl;
        it++;
    }

    //find
    unordered_map<string , int>:: iterator it2 = ourmap.find("abc");
    //erase
    ourmap.erase(it2 , it2+4);

    //for vector

    vector<int> v;
    v.push_back(1)
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int>::iterator it1 = v.begin();     
     return 0;
}