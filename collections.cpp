// C++ program to demonstrate various function of unordered_set 
using namespace std;
#include <iostream>
#include <unordered_set>

int main() { 
  // declaring set for storing string data-type 
  unordered_set <string> stringSet;
  
  // inserting various string, same string will be stored 
  // once in set 
  
  stringSet.insert("code") ; 
  stringSet.insert("in") ; 
  stringSet.insert("c++") ; 
  stringSet.insert("is") ; 
  stringSet.insert("fast") ; 
  
  string key = "slow" ; 
  
  //  find returns end iterator if key is not found, 
  //  else it returns iterator to that key 
  
  if (stringSet.find(key) == stringSet.end()) 
  cout << key << " not found" << endl << endl ; 
  else
  cout << "Found " << key << endl << endl ; 
  
  key = "c++"; 
  if (stringSet.find(key) == stringSet.end()) 
  cout << key << " not found\n" ; 
  else
  cout << "Found " << key << endl ; 
} 