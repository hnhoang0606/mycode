#ifndef UI_UI_H
#define UI_UI_H
#include<iostream>
#include <string >
#include "../Object/Member.h"
#include "../ObjectData/MemberData.h"
using namespace std;

class ui
{
    public:
        void DisplayMember();
        void EditMember();
        void CreateMember();
        void DeleteMember();
        void MainInterFace();
        void Delete();
};

    Member EnterMemberInfor();

#endif
