#include<iostream>
using namespace std;
#include<unordered_map>
#include<string>

int main() {
    unordered_map< string , int> ourmap;
    //insert

    pair<string , int> p ("abc" , 1);
    ourmap.insert(p);
    ourmap["def"] = 2;

    // find or acess

    cout << ourmap["abc"] << endl;
    cout << ourmap.at("abc") << endl;

    // cout << ourmap.at("ghi") << endl; -- give error no key present

    cout << "size of ourmap: " << ourmap.size() << endl;
    cout << ourmap["ghi"] << endl;  // give output 0 and count the size
    cout << "size of ourmap: " << ourmap.size() << endl;

    // check presenec
     if(ourmap.count("ghi") > 0){
        cout << "ghi is present " << endl;
     }

     // erase

     ourmap.erase("ghi");

     cout << " ===== AFTER ERASE ====" << endl;
     cout << "size of ourmap: " << ourmap.size() << endl;
     if(ourmap.count("ghi") > 0){
        cout << "ghi is present " << endl;
     }

     
     return 0;
}