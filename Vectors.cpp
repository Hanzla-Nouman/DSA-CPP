#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec0;

    vector<int> vec = {1, 2, 3};
    cout << vec[1] << endl;

    vector<int> vec2(3, 0);
    cout << vec2[1] << endl;

    vector<char> alpha = {'a', 'b', 'c', 'd'};

    for (char alp : alpha)
    {
        cout << alp << " ";
    }
    cout << endl;

    vector<int> numbers = {1, 2, 3, 4, 5};

    numbers.push_back(6);
    numbers.pop_back();
    cout << numbers.at(2) << endl;
    cout << numbers.size() << endl;
    cout << numbers.front() << endl;
    cout << numbers.back() << endl;

    return 0;
}