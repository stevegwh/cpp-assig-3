// RingBuffer/test_skel.cpp

#include <algorithm>
#include <iostream>

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
    RingBuffer<int> rb2(12);
    cout << "Capacity: " << rb.capacity()
	 << "\nEmpty? " << rb.empty() << endl;

    rb.push_back(28);
    rb.push_back(56);
    rb.push_back(12);
    rb.push_back(24);
    cout << rb.front() << endl;
    cout << "Empty? " << rb.empty()
         << "\nFront: " << rb.front() << endl;
    show(rb);

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
