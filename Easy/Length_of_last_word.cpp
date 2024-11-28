#include <iostream>
#include <cstring>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
    int i  = s.size() - 1;


 while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count the characters of the last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
       
    }

    return length;
      
    }
   

};


int main (){
Solution s;
cout<<  s.lengthOfLastWord("  Hello World  ");


}