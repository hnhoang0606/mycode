#ifndef OBJECTDATA_MEMBERDATA_H
#define OBJECTDATA_MEMBERDATA_H
#include "../Object/Member.h"
#include<iostream>
#include <string >
#include <vector>
#include <fstream>
using namespace std;

class MemberData
{
    vector<Member> _data;
    int MaxId;

    public:
        MemberData();
        MemberData(string filename);
        int GetSize();
        int GetMaxId();
        Member Get(int i);
        int PushBack(Member member);
        int Export(string filename);
        void Set(Member member, int i);
        int Delete(int i);

};

#endif