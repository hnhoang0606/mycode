#include "book.h"

Book :: Book()
{

}

Book :: Book(int id ,int bookId, string name,int frice )
{
    ID = id ; 
    BookId = bookId ;
    Name = name ;
    Frice = frice ;
}

int Book ::GetID()
{
    return ID;
}

int Book ::GetBookID()
{
    return BookId;
}

string Book ::GetName()
{
    return Name;
}

int  Book ::GetFrice()
{
    return Frice;
}


void Book ::SetID(int id)
{
    ID = id;
}
void Book ::SetBookID(int bookid)
{
    BookId = bookid;
}
void Book ::SetName(string name)
{
    Name = name;
}
void Book ::SetFrice(int frice)
{
    Frice = frice;
}

string Book ::ToString()
{
    string s;
    s = "{ " + to_string(ID) + ", ";
    s += "BookId: " + to_string(BookId) + ", ";
    s += "Name: " + Name + ", ";
    s += "Frice: " + to_string(Frice) + ", " +"}";
    return s;
}