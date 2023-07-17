#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>

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

    /****************************************   PRIORITY QUEUE OPERATIONS   *******************************************/

    priority_queue<int> maxi;                            // max heap
    priority_queue<int, vector<int>, greater<int>> mini; // mini heap

    maxi.push(1);
    maxi.push(3);
    maxi.push(0);
    maxi.push(2);

    cout << "size -> " << maxi.size() << endl;

    // int n = maxi.size();

    for (int i = 0; i < maxi.size(); i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(5);
    mini.push(3);
    mini.push(2);
    mini.push(1);

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << " Empty : " << mini.empty() << endl;

    /********************************************   SET OPERATIONS   *************************************************/

    set<int> st;
    st.insert(5);
    st.insert(4);
    st.insert(3);
    st.insert(2);
    st.insert(0);

    for (auto i : st)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = st.begin();
    it++;

    st.erase(it);
    for (auto i : st)
    {
        cout << endl;
    }
    cout << endl;

    cout << "-5 is present or not -> " << st.count(-5) << endl;

    set<int>::iterator itr = st.find(5);

    for (auto it = itr; it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    /**********************************************  MAP OPERATIONS   *************************************************/

    map<int, string> mp;

    mp[1] = "Adarsh";
    mp[12] = "Sharma";
    mp[2] = "Hello";

    mp.insert({5, "bheem"});

    cout << "Before erase " << endl;
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding -13 -> " << mp.count(-13) << endl;
    mp.erase(13);

    cout << "After erase: " << endl;

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    auto itt = mp.find(5);

    for (auto i = itt; i != mp.end(); i++)
    {
        cout << (*i).first << endl;
    }
}
