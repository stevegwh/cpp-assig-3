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

    auto it = rb.begin();

    cout << *it << endl;
    it++;
    cout << *it << endl;
    it++;
    cout << *it << endl;
    it++;
    cout << *it << endl;
    it++;
    cout << *it << endl;

    return 0;
}
