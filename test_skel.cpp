// RingBuffer/test_skel.cpp

#include <algorithm>
#include <iostream>
#include <string>
#include <deque>

#include "RingBuffer.hpp"

using namespace std;

void show(const RingBuffer<int>& rb)
{
    cout << "Size: " << rb.size() << "  { ";
    std::copy(rb.begin(), rb.end(), ostream_iterator<int>(cout, " "));
    cout << "}" << endl;
}

int main()
{
    RingBuffer<int> rb(7);
    cout << "Capacity: " << rb.capacity()
	 << "\nEmpty? " << rb.empty() << endl;

    rb.push_back(1);
    rb.push_back(2);
    rb.push_back(3);
    rb.push_back(4);
    rb.push_back(5);
    rb.push_back(6);
    rb.pop_front();
    rb.pop_front();
//    rb.pop_front();
//    rb.push_back(7);
//    rb.push_back(7);
//    rb.push_back(7);


    cout << "Empty? " << rb.empty()
         << "\nFront: " << rb.front() << endl;

/*
    auto it = rb.begin();
    auto it2 = rb.begin() + 2;

    std::cout << "begin + 2 - begin: " << (it - it2) << std::endl;
    */

    show(rb);

/*
    auto it1 = rb.begin();
    auto it2 = rb.begin() + 2;
    cout << (it2 < it1) << endl;
    cout << *it1 << endl;
    it1++;
    cout << *it1 << endl;
    it1++;
    cout << *it1 << endl;
    it1++;
    cout << *it1 << endl;
    it1++;
*/

//    cout << (rb == rb2) << endl;


    // auto it = rb.begin();
    // auto it2 = rb.end();
    // cout << it2 - it << endl;


/*
    auto itIdx = rb.begin();
    cout << *itIdx << endl;
    cout << itIdx[1] << endl;
*/

    for (auto it = rb.begin(); it != rb.end(); ++it)
    {
        cout << *it << endl;
    }
/*
    auto it1 = rb.begin() + 2;
    auto it2 = rb.begin();

    cout << "it1 - it2 = " << (it2 - it1) << endl;
*/
/*
    auto it1 = rb.begin();
    auto it2 = rb.end();
    cout << (it1 == it2) << endl;
*/

/*
    auto it = rb.begin();
    int i = 0;
    while(i < 10)
    {
        cout << *it << endl;
        ++it;
        i++;
    }
*/

    return 0;
}
