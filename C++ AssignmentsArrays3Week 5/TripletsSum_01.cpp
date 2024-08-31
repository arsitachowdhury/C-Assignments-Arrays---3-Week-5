#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int threesum(vector<int>&v,int val)
{
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            for(int k=j+1;k<v.size();k++)
            {
                if(v[i]+v[j]+v[k]==val)
                {
                   count++;
                   cout<<"["<<i<<","<<j<<","<<k<<"]"<<endl;
                }
            }
        }
    }
   if(count==0)
   cout<<"There is no triplet found";
   else 
   return count;
}
int main()
{
    int size,num,tgt;
    vector<int> v;
    cout<<"Enter the vector size : ";
    cin>>size;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<size;i++)
    {
         cin>>num;
         v.push_back(num); 
    }
    cout<<"Enter the target : ";
    cin>>tgt;
    cout<<"The number of triplets : "<<threesum(v,tgt);
    return 0;
}