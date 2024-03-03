//
//  main.cpp
//  cppl-homework-08.01
//
//  Created by a1ex on 3/3/24.
//

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

template <class T>
std::vector<T> eraseDoubles(std::vector<T>& v)
{
    std::set<T> v1;
    for (auto i : v)
    {
        v1.insert(i);
    }
    v.clear();
    for (auto i : v1)
      {
        v.push_back(i);
      }
    return v;
}

int main(int argc, const char * argv[]) {

    std::vector<int> v{1,1,2,5,6,1,2,4};
    std::cout << "[IN]: ";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    eraseDoubles(v);
    std::cout << "[OUT]: ";
  for(auto it = v.begin(); it != v.end(); ++it)
  {
      std::cout << *it << " ";
  }
    std::cout << std::endl;


    return 0;
}
