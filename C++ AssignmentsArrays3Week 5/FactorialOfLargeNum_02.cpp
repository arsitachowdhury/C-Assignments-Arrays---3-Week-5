#include <iostream>
#include <vector>
using namespace std;
int funfact(vector<int> &nums, int val, int size)
{
    int carry = 0;
    for (int i = 0; i < size; i++)
    {
        int pdt = nums[i] * val + carry;
        nums[i] = pdt % 10;
        carry = pdt / 10;
    }
    while (carry)
    {
        nums[size] = carry % 10;
        carry /= 10;
        size++;
    }
    return size;
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    vector<int> v(500, 0);
    int size = 1;
    v[0] = 1;
    for (int i = 2; i <= n; i++)
    {
        size = funfact(v, i, size);
    }
    for (int i = size - 1; i >= 0; i--)
    {
        cout << v[i];
    }
    return 0;
}