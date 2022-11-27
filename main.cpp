#include <iostream>
#include "funcs.h"
using namespace std;

int main(){
    cout<<"TASK A - makeVector(10)"<<endl;
    display(makeVector(10));

    vector<int> v1{1, 2, -1, 3, 4, -1, 6};
    vector<int> ans1 = goodVibes(v1);

    cout<<"\nTASK B - goodVibes(v1)"<<endl;
    cout<<"v1: ";
    display(v1);
    cout<<"goodVibes(v1): ";
    display(ans1);

    cout<<"\nTASK C - gogeta(v1,v2)"<<endl;
    vector<int> vec1{1, 2, 3};
    vector<int> vec2{4, 5};
    cout<<"v1: ";
    display(vec1);
    cout<<"v2: ";
    display(vec2);
    cout<<"gogeta(v1,v2)\n";
    cout<<"v1: ";
    gogeta(vec1,vec2);
    display(vec1);
    cout<<"v2:";
    display(vec2);

    cout<<"\nTASK D - sumPairWise(v1,v2)"<<endl;
    vector<int> vect1{1,2,3};
    vector<int> vect2{4,5};
    cout<<"v1: ";
    display(vect1);
    cout<<"v2: ";
    display(vect2);
    cout<<"sumPairWise(v1,v2)\n";
    display(sumPairWise(vect1,vect2));
}