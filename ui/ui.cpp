#include "ui.h"

void ui :: DisplayMember()
{
    MemberData memberData("Member.txt");
    for(int i =0 ; i<memberData.GetSize(); i++ )
    {   
        Member member = memberData.Get(i);
        cout << member.ToString()<<endl;
    }
}
void ui ::EditMember()
{
    MemberData memberData("Member.txt");
    cout << "please enter id of the table you what to edit:  ";
    int choice;
    cin >> choice; choice --;
    cout <<"old data: " << memberData.Get(choice).ToString()<<endl;
    Member member = EnterMemberInfor();
    memberData.Set(member,choice);
    cout << memberData.Get(choice).ToString()<<endl;
    memberData.Export("Member.txt");
}

void ui ::CreateMember()
{
    cout <<"Create Member " <<endl;
    //Member member = EnterMemberInfor();
    MemberData memberData("Member.txt");

    Member member;
    cout <<"Enter Member Information"<<endl;
    cout <<" Enter MemberID:  ";
    int i; cin >>i;
    member.SetMemberID(i);
    cout <<" Enter MemberName: ";
    string s; cin >> s;
    member.SetMemberName(s);

    member.InCreateID();
    memberData.PushBack(member);
    cout << member.ToString();
    memberData.Export("Member.txt");
}
void ui ::DeleteMember()
{
    cout <<"Delete Element in table"<<endl;
    cout << endl;
    DisplayMember();
    cout <<endl;
    cout <<" choose id that you want do delete";
}

Member EnterMemberInfor()
{   
    Member member;
    cout <<"Enter Member Information"<<endl;
    cout <<" Enter MemberID:  ";
    int i; cin >>i;
    member.SetMemberID(i);
    cout <<" Enter MemberName: ";
    string s; cin >> s;
    member.SetMemberName(s);
    //cout << member.ToString()<<endl;
    return member;
}

void ui :: Delete()
{   
    MemberData memberData;
    int n;
    cout <<" Enter Id that you want to delete"<<endl;
    cout <<" Id: ";
    cin >> n;
    memberData.Delete(n);
    memberData.Export("Member.txt");
}


void ui :: MainInterFace()
{   
    cout <<"tam ok";
    //Delete();

    CreateMember();
    //DisplayMember();
}