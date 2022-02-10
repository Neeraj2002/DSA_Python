// Vectors are like dynamice array, Size is not needed to be defined 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1); // push back is used to add elements in the vector
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< endl;
    } // o/p: 1 2 3

    // Another way to iterate through this vector
    vector<int>::iterator it;
    for ( it = v.begin(); it != v.end(); it++) 
    // v.begin():first element of vector
    // v.end(): last element of the vector
    {
        cout<<*it<<endl;
    } // o/p: 1 2 3

    for(auto element:v){  // by using auto keyword we tell compiler to automatically decide the datatype using the keyword
        cout<<element<<endl;
    } // o/p: 1 2 3 

    v.pop_back(); // Last element in the vector will be removed // o/p: 1 2

    vector<int> v2(3,50);  // o/p: 50 50 50

    swap(v,v2); // swapping values within the vectors

    sor(v.begin(), v.end());

    return 0;
}
