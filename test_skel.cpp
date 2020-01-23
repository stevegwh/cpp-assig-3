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
    std::deque<int> dq;
    dq.push_back(7);
    dq.push_back(3);
    dq.push_back(22);
    dq.push_back(72);
    auto dit = dq.begin();
    auto dit2 = dq.begin();
    RingBuffer<int> rb(7);
    cout << "Capacity: " << rb.capacity()
	 << "\nEmpty? " << rb.empty() << endl;

    rb.push_back(28);
    rb.push_back(56);
    rb.push_back(13);
    rb.push_back(24);
    rb.pop_front();
    rb.pop_front();
    rb.pop_front();
    rb.pop_front();
    rb.push_back(24);
    rb.push_back(24);
    rb.push_back(24);

    cout << "Empty? " << rb.empty()
         << "\nFront: " << rb.front() << endl;
    show(rb);
    auto it = rb.begin();
    auto it2 = rb.begin() + 2;

    std::cout << (it - it2) << std::endl;

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
    auto it = rb.begin();
    cout << *it << endl;
    cout << it[3] << endl;
*/

/*
    for (auto it = rb.begin(); it != rb.end(); ++it)
    {
        cout << *it << endl;
    }
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
