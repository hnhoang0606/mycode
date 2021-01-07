#ifndef UI_UI_H
#define UI_UI_H
#include<iostream>
#include <string >
#include "../Object/Member.h"
#include "../Object/book.h"
#include "../ObjectData/MemberData.h"
#include "../ObjectData/BookData.h"
using namespace std;

class ui
{
    public:
        void DisplayMember();
        void EditMember();
        void CreateMember();
        void DeleteMember();
        void MainInterFace();

        void ReadBookTalble();
        void CreateBook();
        void EditBook();
        void DeleteBook();
        
};
    Member EnterMemberInfor();
    Book EnterBookInfor();

#endif
