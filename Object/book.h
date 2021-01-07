#ifndef _OBJECT_BOOK_H_
#define _OBJECT_BOOK_H_
#include "iostream"
#include "string.h"
using namespace std;

class Book
{
    int ID;
    int BookId;
    string Name;
    int Frice;

    public:
        Book();
        Book(int id ,int bookId, string name,int frice );

        int GetID();
        int GetBookID();
        string GetName();
        int  GetFrice();

        void SetID(int id);
        void SetBookID(int bookid);
        void SetName(string name);
        void SetFrice(int frice);

        string ToString();

        //friend Book EnterBookInfor();

};
#endif
