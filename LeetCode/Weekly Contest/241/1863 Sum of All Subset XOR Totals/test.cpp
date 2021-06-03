#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<char> copyTo(string str);

int main()
{
    string str = "11,2,12,4,5,6";
    vector<char> vect;
    vect= copyTo(str);

    // stringstream ss(str);

    // for (int i; ss >> i;) {
    //     vect.push_back(i);    
    //     if (ss.peek() == ',')
    //         ss.ignore();
    // }

    // for (size_t i = 0; i < vect.size(); i++)
    //     cout << vect[i] << endl;
}

vector<char> copyTo(string str)
{
    vector<char> vect;

    stringstream ss(str);

    for (int i; ss >> i;) {
        vect.push_back(i);    
        if (ss.peek() == ',')
            ss.ignore();
    }

    for (size_t i = 0; i < vect.size(); i++)
        cout << vect[i]<<"-"<<(int)vect[i] << endl;

    return vect;
}