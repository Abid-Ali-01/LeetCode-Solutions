#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
       
        int index = haystack.find(needle);
        
        for(int i = 0; i <= haystack.size()-1; i++){
          if(index != string::npos){
            return index;
          }
        }
    return index;
    }
};


int main() {
    Solution s;
int index = s.strStr("fdacascwubfuecifoundajeuecbscuasdbaasichasifas", "found");
cout<<index;

    return 0;
}
