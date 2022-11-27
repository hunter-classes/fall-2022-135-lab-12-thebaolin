#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
using namespace std;


TEST_CASE("TASK A"){

    auto v1 = makeVector(5);
    auto v2 = makeVector(1);
    auto v3 = makeVector(0); 
    auto v4 = makeVector(8);

    vector<int> ans1{0,1,2,3,4};
    vector<int> ans2{0};
    vector<int> ans3;
    vector<int> ans4{0,1,2,3,4,5,6,7};

    CHECK_EQ(v1, ans1);
    CHECK_EQ(v2, ans2);
    CHECK_EQ(v3, ans3);
    CHECK_EQ(v4, ans4);

}

TEST_CASE("TASK B") {

    vector<int> v1{1, 2, -1, 3, 4, -1, 6};
    vector<int> v2{11,11,-11};
    vector<int> v3{-12, -13, -14, 1, 2 ,-5, 5};

    auto res1 = goodVibes(v1);
    auto res2 = goodVibes(v2);
    auto res3 = goodVibes(v3);

    std::vector<int> ans1{1, 2, 3, 4, 6};
    std::vector<int> ans2{11, 11};
    std::vector<int> ans3{1, 2, 5};

    CHECK_EQ(res1, ans1);
    CHECK_EQ(res2, ans2);
    CHECK_EQ(res3, ans3);

}

TEST_CASE("TASK C"){

    vector<int> v1{1,2,3};
    vector<int> v2{4,5};
    gogeta(v1,v2);
    vector<int> ans1{1, 2, 3, 4, 5};
    CHECK_EQ(v1, ans1);
    CHECK(v2.empty());

    vector<int> v3{4,-5,6};
    vector<int> v4{-1,-1,-1};
    gogeta(v3,v4);
    vector<int> ans2{4,-5,6,-1,-1,-1};
    CHECK_EQ(v3,ans2);
    CHECK(v4.empty());

    vector<int> v5;
    vector<int> v6{111};
    gogeta(v5,v6);
    vector<int> ans3{111};
    CHECK_EQ(v5,ans3);
    CHECK(v6.empty());

}

TEST_CASE("TASK D") {

    vector<int> v1{1, 2, 3};
    vector<int> v2{4, 5};
    vector<int> ans1{5, 7, 3};
    CHECK_EQ(sumPairWise(v1, v2), ans1);

    vector<int> v3{2,4};
    vector<int> v4{1,-1,-1};
    vector<int> ans2{3,3,-1};
    CHECK_EQ(sumPairWise(v3,v4), ans2);

    vector<int> v5;
    vector<int> v6;
    CHECK(sumPairWise(v5,v6).empty());

}