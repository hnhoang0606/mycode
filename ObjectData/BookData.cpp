#include "BookData.h"

BookData :: BookData()
{
    _data.resize(0);
    MaxID = 0;
}

BookData :: BookData(string filename)
{
    _data.resize(0);
    MaxID = 0;
    ifstream fileIn(filename);
    int Number = 0;
    fileIn >> Number;

    int ID;
    int BookId;
    string Name;
    int Frice;

    for (int i=0 ; i < Number; i++)
    {
        fileIn >> ID;
        fileIn >> BookId;
        fileIn >> Name;
        fileIn >> Frice;
        Book book(ID, BookId, Name ,Frice);
        _data.push_back(book);
        MaxID = ID;
    }
    fileIn.close();
}

int BookData ::Getsize()
{
    return _data.size();
}

int BookData ::GetMaxID()
{
    return MaxID;
}

Book BookData ::Get(int i)
{
    return _data[i];
}
int BookData ::PushBack(Book book)
{
    MaxID ++;
    book.SetID(MaxID);
    _data.push_back(book);
    return MaxID;
}

int BookData ::Export(string filename)
{
    ofstream fileOut(filename);
    fileOut << _data.size() <<endl;
    for(Book book : _data)
    {
        fileOut << book.GetID() <<endl;
        fileOut << book.GetBookID() <<endl;
        fileOut << book.GetName() <<endl;
        fileOut << book.GetName() <<endl;
    }
    fileOut.close();
    return 1;
}

void BookData :: Set(Book book, int i)
{
    _data[i] = book;
}

int BookData ::Delete(int id)
{
    _data.erase(_data.begin() + id);
    return 1;
}

// void BookData :: CreateB()
// {
//     BookData bookdata("Book.txt");
//     Book book = EnterBookInfor();
//     bookdata.PushBack(book);
//     bookdata.Export("Book.txt");
// }

// void BookData ::Edit(int i)
// {
//      BookData bookdata("Book.txt");
//      Book book = bookdata[i];

    
// }


// void BookData :: EditBook()
// {
//     BookData bookdata("Book.txt");
//     Book book = EnterBookInfor();
//     bookdata.PushBack(book);
//     bookdata.Export("Book.txt");
// }

