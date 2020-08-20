#include <iostream>
#include <unordered_map>

using namespace std;

const string TEST_STRING1 = "aaabcccdeeef";
const string TEST_STRING2 = "aappabbcccqfergrtetryreyeuyreythtdzscgfdgsfdhgfjydqeeef";
const string TEST_STRING3 = "aaabbcccddeee";

// way 1: use two pointers however that is O(n^2)
// way 2: use hash map, however that doesnt store in order
// way 3: ^ but also add a second loop that goes through the string again
//        and stops when it finds the first char with only 1, stop and return!

// O(2n)... so basically O(n)
char firstNonRepeating(string n) {
  unordered_map<char, int> mp;

  // store and count occurences 
  for(auto& i : n) 
      mp[i] = mp[i]+1;
  
  // look thru and find first occurence
  for(auto& i : n)
      if(mp[i] == 1)
        return i;

  // if non repeating char is not found 
  return '_';
}


int main() {
  
  printf("Testing Non Repeat Function: \n");
  printf("Testing %s: %c\n", TEST_STRING1.c_str(), firstNonRepeating(TEST_STRING1));
  printf("Testing %s: %c\n", TEST_STRING1.c_str(), firstNonRepeating(TEST_STRING2));
  printf("Testing %s: %c\n", TEST_STRING1.c_str(), firstNonRepeating(TEST_STRING3));



  // for (auto& i : mp)
  //   printf("%c : %d\n", i.first, i.second);

}