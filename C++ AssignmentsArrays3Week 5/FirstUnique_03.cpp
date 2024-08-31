#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void funique(vector<int> &v)
{
    bool flag = false;
    int i = 0, j = 0;
    for (i = 0; i < v.size(); i++)
    {
        for (j = 0; j < v.size(); j++) // 2 1 2 1
        {
            if (i != j && v[i] == v[j]) // 1 2
                break;
        }
        if (j == v.size())
        {
            cout << "First non reapeating elements is : " << v[i];
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << "All are repeting elements";
}
int main()
{
    int size, num, tgt;
    vector<int> v;
    cout << "Enter the vector size : ";
    cin >> size;
    cout << "Enter the elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    funique(v);
    return 0;
}