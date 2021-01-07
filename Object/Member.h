#ifndef OBJECT_MEMBER_H
#define OBJECT_MEMBER_H

#include<iostream>
#include <string >
using namespace std;

class Member
{
    int Id;
    int MemberID;
    string MemberName;
    // static int IncreID;
    public :
        Member();
        Member(int id, int memberID, string memberName);
        int GetId();
        void SetId(int id);
        int GetMemberID();
        string GetMemberName();
        void SetMemberID(int memberID);
        void SetMemberName(string memberName);
        string ToString();
        // void InCreateID();
        //friend Member EnterMemberInfor();
};
#endif