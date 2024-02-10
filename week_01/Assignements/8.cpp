#include <iostream>

using namespace std;

int main() {
  string str = "How are you?";
  string str1 = "hello";
  
  // Find the first occurrence of "are" in "How are you?"
  int pos = str.find("are");
  
  // If "are" is found, insert "hello" after it
  if (pos != string::npos) {
    str.insert(pos + 3, str1);
  }
  
  // Print the modified string
  cout<< str << endl;
  
  return 0;
}
