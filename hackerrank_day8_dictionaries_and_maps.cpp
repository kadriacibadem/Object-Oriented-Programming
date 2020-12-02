#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;


int main() {

    //creating map and iterator
    unordered_map <string, unsigned long int> my_map; 
    unordered_map <string, unsigned long int>::iterator it;

    unsigned long int n;
    cin >> n;
    unsigned long int phoneNumber;
    string name, searchName;


    //input my_map variable
    for (unsigned long int i = 0; i < n; i++) {
        cin >> name >> phoneNumber;
        my_map[name] = phoneNumber;
    }

    //searching name in my_map
    while (cin >> searchName) {
        it = my_map.find(searchName);
        if (it == my_map.end()) {
            cout << "not found" << endl;
        }
        else {
            cout << it->first << "=" << it->second << endl;
        }
    }
    return 0;
}
