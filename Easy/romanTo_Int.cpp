#include <iostream>
#include <map>
#include <string>
using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        // Map for Roman numeral values
        map<string, int> myMap;
        myMap["I"] = 1;
        myMap["V"] = 5;
        myMap["X"] = 10;
        myMap["L"] = 50;
        myMap["C"] = 100;
        myMap["D"] = 500;
        myMap["M"] = 1000;

        int result = 0;

    
        for (int i = 0; i < s.size(); ++i) {
           
            string currentChar(1, s[i]);
            int currentValue = myMap[currentChar];
         
            int nextValue = 0; 
            if (i + 1 < s.size()) {
                string nextChar(1, s[i + 1]);
                nextValue = myMap[nextChar];
            }

      
            if (currentValue < nextValue) {
                result -= currentValue;
            } else {
                result += currentValue;
            }
        }

        return result;
    }
};


int main (){

Solution s;

s.romanToInt("MXM");
cout<<s.romanToInt("MXM");


}
