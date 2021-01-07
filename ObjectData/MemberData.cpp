#include "MemberData.h"

MemberData :: MemberData()
{
    _data.resize(0);
    MaxId = 0;
}
MemberData :: MemberData(string filename)
{
    _data.resize(0);
    MaxId = 0;
    ifstream FileIn (filename);
    int Number = 0;
    FileIn >> Number;

    int Id;
    int MemberID;
    string MemberName;

    for(int i = 0; i < Number; i++)
    {  
        FileIn >> Id;
        FileIn >> MemberID;
        FileIn >> MemberName;
        Member member(Id,MemberID,MemberName );
        _data.push_back(member);
        MaxId = Id;
    }
    FileIn.close();

}


int MemberData ::GetSize()
{
    return _data.size();
}
int MemberData ::GetMaxId()
{
    return MaxId;
}
Member MemberData ::Get(int i)
{
    return _data[i];
}

int MemberData ::PushBack(Member member)
{   
    MaxId ++;
    member.SetId(MaxId);
    _data.push_back(member);
    return MaxId;
}
int MemberData ::Export(string filename)
{
    ofstream FileOut(filename);
    FileOut << _data.size() << endl;
    for(Member member: _data)
    {   
        FileOut << member.GetId() <<endl;
        FileOut << member.GetMemberID() <<endl;
        FileOut << member.GetMemberName() <<endl;
    }
    FileOut.close();
    return 1;
}

void MemberData :: Set(Member member, int i)
{
    _data[i] = member;
}


int MemberData::Delete(int id)
{
    _data.erase(_data.begin() + id);
    
    return 0;
}