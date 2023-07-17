#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    /*******************************************   VECTOR OPERATIONS   ************************************************/
    vector<int> v;

    v.push_back(2); // It adds element to the vector
    v.push_back(3);

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.clear(); // Clear the entire vector

    vector<int> vec(5, 1); // A vector of size 5 initialized with value 1

    vector<int> a(vec); // Copy elements of vect to a

    /*******************************************   DEQUE OPERATIONS   ************************************************/

    deque<int> d;
    d.push_back(1);
    d.push_back(3);
    d.push_front(2);

    d.pop_back();
    d.pop_front();

    // This prints the deque elements as i
    for (auto i : d)
    {
        cout << i << " ";
    }

    d.at(1); // This prints the first index element

    d.erase(d.begin(), d.begin() + 1); // Erase deque from beginning to (beginning + 1) but not including (beginning + 1)

    /*******************************************   LIST OPERATIONS   ************************************************/

    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.push_back(3);

    for (int i : l)
    {
        cout << i << " ";
    }

    l.erase(l.begin()); // erases the first element of the list l

    list<int> n(l); // copying l to n

    list<int> n(5, 100); // Size: 5 and elements_value: 100

    /*******************************************   STACK OPERATIONS   ************************************************/

    stack<string> s;
    s.push("Adarsh");
    s.push("Sharma");

    cout << "Top element  ->  " << s.top() << endl;
    s.pop();
    cout << "Top element  ->  " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl;
    cout << "Empty or not: " << s.empty() << endl;

    /*******************************************   QUEUE OPERATIONS   ************************************************/

    queue<string> q;
    q.push("Adarsh");
    q.push("Sharma");

    cout << q.front() << endl; // Retrieves the element from the front of the queue
    cout << q.back() << endl;  // Retrieves the element from the back of the queue

    q.pop();
    cout << q.size() << endl;
}