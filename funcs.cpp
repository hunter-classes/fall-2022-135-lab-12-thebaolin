#include <iostream>
#include "funcs.h"
using namespace std;

//TASK A
vector<int> makeVector(int n){
    vector<int> result;

    if(n < 1)
        return result;
    for(int i = 0; i < n; i++){
        result.push_back(i);
    }
    return result;
}

//TASK B
vector<int> goodVibes(const vector<int> &v){
    vector<int> result;

    for(int num: v){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}

//TASK C
void gogeta(vector<int> &goku, vector<int> &vegeta){
    for(int &num: vegeta){
        goku.push_back(num);
    }
    vegeta.clear();
}

//TASK D
vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2){
    vector<int> result;
    if(v1.size() > v2.size()){
        for(size_t i = 0; i < v1.size(); i++){
            if(i < v1.size()){
                result.push_back(v1[i] + v2[i]);
            }
            else{
                result.push_back(v1[i]);
            }
        }
    }
    else{
        for(size_t i = 0; i < v2.size(); i++){
            if(i < v2.size()){
                result.push_back(v2[i] + v1[i]);
            }
            else{
                result.push_back(v2[i]);
            }
        }
    }
    return result;
}

void display(const vector<int> &result){
    for(auto num: result){
        cout<<num << " ";
    }
    cout<<endl;
}