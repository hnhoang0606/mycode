#ifndef _OBJECTDATA_BOOKDATA_H_
#define _OBJECTDATA_BOOKDATA_H_
#include "iostream"
#include "string.h"
#include  <fstream>
#include "../Object/book.h"
#include <vector>
using namespace std;

class BookData
{
    vector <Book> _data;
    int MaxID;

    public:
        BookData();
        BookData(string filename);
        int Getsize();
        int GetMaxID();
        Book Get(int i);
        int PushBack(Book book);
        int Export(string filename);
        void Set(Book book, int i);

        int Delete(int i);
        //void CreateB();
};

#endif