#include <iostream>
#include <vector>
#include <string>


using namespace std;
int main(int argc, char *argv[])
{
  vector<string> vec;
  vec.push_back("hello");
  vec.push_back("hello2");
  vec.push_back("hello3");
  vec.push_back("hello4");
  vec.push_back("hello5");
  cout << vec[0] << endl;

  auto it = vec.begin();
  auto it2 = vec.begin() + 4;
  cout << (it2 < it) << endl;


  
  return 0;
}
