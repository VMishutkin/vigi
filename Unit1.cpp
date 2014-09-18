//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender) //øèôğóåì
{
AnsiString tocode=Edit1->Text;
AnsiString key=Edit4->Text;
AnsiString abc ("àáâãäå¸æçèéêëìíîïğñòóôõö÷øùúûüışÿÀÁÂÃÄÅ¨ÆÇÈÉÊË\
ÌÍÎÏĞÑÒÓÔÕÖ×ØÙÚÛÜİŞßabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
//key = key.Length();
    int len = tocode.Length();
    int a= abc.Length();
    int k=key.Length();
    for (int i=k; i<len; i++){
        int t=i%k;
        key+=key[t+1];
    }
    AnsiString crypted="";
    for (int i=1; i<=len; i++){
    int ind1=0,ind2=0;
         //ind1=abc.find(tocode[i]);
        //ind2=abc.find(key[i]);
        ind1=abc.Pos(tocode[i]);
        ind2=abc.Pos(key[i]);
        crypted.Insert(abc[(ind1+ind2)%a],i);
        //crypted.Insert(i,1,abc.at((ind1+ind2)%33));
    }
    Edit2->Text=crypted;

    }
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)  //ğàñøèôğîâûâàåì
{

AnsiString tocode=Edit2->Text;
AnsiString key=Edit4->Text;
AnsiString abc ("àáâãäå¸æçèéêëìíîïğñòóôõö÷øùúûüışÿÀÁÂÃÄÅ¨ÆÇÈÉÊË\
ÌÍÎÏĞÑÒÓÔÕÖ×ØÙÚÛÜİŞßabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
//key = key.Length();
    int len = tocode.Length();
    int a= abc.Length();
    int k=key.Length();
    for (int i=k; i<len; i++){
        int t=i%k;
        key+=key[t+1];
    }
    AnsiString crypted="";
    for (int i=1; i<=len; i++){
    int ind1=0,ind2=0;
         //ind1=abc.find(tocode[i]);
        //ind2=abc.find(key[i]);
        ind1=abc.Pos(tocode[i]);
        ind2=abc.Pos(key[i]);
        int index=(ind1-ind2+a)%a;
        if(index == 0)
        index=a;
        crypted.Insert(abc[index],i);

        //crypted.Insert(i,1,abc.at((ind1+ind2)%33));
        Edit3->Text=crypted;
 }}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)   //÷èñòèì
{
Edit1->Clear();
Edit2->Clear();
Edit3->Clear();

}
//---------------------------------------------------------------------------
