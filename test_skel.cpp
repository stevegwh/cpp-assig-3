// RingBuffer/test_skel.cpp

#include <algorithm>
#include <iostream>
#include <string>
#include <deque>
#include <vector>

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
    RingBuffer<int> rb2(7);
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
    // 4
    rb.push_back(1);
    rb.push_back(2);
    // 6
    rb.pop_front();
    rb.pop_front();
    rb.pop_front();
    rb.pop_front();
    // 2
    rb.push_back(1);
    rb.push_back(2);
    rb.push_back(3);
    rb.push_back(4);
    // 6
    rb.pop_front();
    rb.pop_front();
    rb.push_back(5);
    rb.push_back(6);
    // 4


    cout << "Empty? " << rb.empty()
         << "\nFront: " << rb.front() << endl;

/*
    auto it = rb.begin();
    auto it2 = rb.begin() + 2;

    std::cout << "begin + 2 - begin: " << (it - it2) << std::endl;
    */

    show(rb);

    auto incit = rb.begin();
    incit++;
    incit++;
    incit++;
    incit++;
    incit++;
    cout << "Value after incrementing 5 times: " << *incit << endl;
    --incit;
    --incit;
    --incit;
    --incit;
    --incit;
    cout << "Value after decrementing 5 times: " << *incit << endl;
    auto lessthanit = rb.begin() + 5;
    cout << "Result of 0 < 5: " << (rb.begin() < lessthanit) << endl;
    cout << "Result of 5 < 0: " << (lessthanit < incit) << endl;

    cout << "Does ringbuffer match second empty ringbuffer?: " << (rb == rb2) << endl;
    cout << "Does ringbuffer match itself?: " << (rb == rb) << endl;


     auto minusit = rb.begin();
     auto minusit2 = rb.begin() + 2;
     cout << "Value of 'begin + 2' minus 'begin': " << minusit2 - minusit << endl;
    cout << "Value of 'begin' minus 'begin + 2': " << minusit - minusit2 << endl;


    auto itIdx = rb.begin();
    for (long unsigned int i = 0; i < rb.size(); ++i)
    {
        cout << "Value at index " << i << ": " << itIdx[i] << endl;
    }

    for (auto it = rb.begin(); it != rb.end(); ++it)
    {
        cout << "Value at index: " << *it << endl;
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
